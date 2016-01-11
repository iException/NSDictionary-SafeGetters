/*
 *   Copyright (c) 2015 - 2016 Kulykov Oleh <info@resident.name>
 *
 *   Permission is hereby granted, free of charge, to any person obtaining a copy
 *   of this software and associated documentation files (the "Software"), to deal
 *   in the Software without restriction, including without limitation the rights
 *   to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 *   copies of the Software, and to permit persons to whom the Software is
 *   furnished to do so, subject to the following conditions:
 *
 *   The above copyright notice and this permission notice shall be included in
 *   all copies or substantial portions of the Software.
 *
 *   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 *   IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 *   FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 *   AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 *   LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 *   OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 *   THE SOFTWARE.
 */


#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>

/**
 @brief During debug, each method check for nil key value.
 */
@interface NSDictionary(SafeGetters)


/**
 @brief Get integer value from JSON object.
 @detailed Checking for nil and object type for getting value.
 @param aKey The key object.
 @return Integer value if object not nil and have type as NSNumber or NSString, othervice 0.
 */
- (NSInteger) integerForKey:(nonnull id) aKey;


/**
 @brief Get unsigned integer value from JSON object.
 @detailed Checking for nil and object type for getting value. In case if object is NSString getting integer value and casting to unsigned.
 @param aKey The key object.
 @return Unsigned integer value if object not nil and have type as NSNumber or NSString, othervice 0.
 */
- (NSUInteger) unsignedIntegerForKey:(nonnull id) aKey;


/**
 @brief Get integer 64 bit value from JSON object.
 @detailed Checking for nil and object type for getting value.
 @param aKey The key object.
 @return Integer 64 bit value if object not nil and have type as NSNumber or NSString, othervice 0.
 */
- (int64_t) int64ForKey:(nonnull id) aKey;


/**
 @brief Get unsigned integer 64 bit value from JSON object.
 @detailed Checking for nil and object type for getting value. In case if object is NSString getting integer value and casting to unsigned.
 @param aKey The key object.
 @return Unsigned integer 64 bit value if object not nil and have type as NSNumber or NSString, othervice 0.
 */
- (uint64_t) uint64ForKey:(nonnull id) aKey;


/**
 @brief Get double value from JSON object.
 @detailed Checking for nil and object type for getting value. In all cases getting double value and casting to double.
 @param aKey The key object.
 @return Double value if object not nil and have type as NSNumber or NSString, othervice 0.0.
 */
- (double) doubleForKey:(nonnull id) aKey;


/**
 @brief Get float value from JSON object.
 @detailed Checking for nil and object type for getting value. In all cases getting double value and casting to float.
 @param aKey The key object.
 @return Float value if object not nil and have type as NSNumber or NSString, othervice 0.0.
 */
- (float) floatForKey:(nonnull id) aKey;


/**
 @brief Get float value from JSON object.
 @detailed Checking for nil and object type for getting value. In all cases getting double value and casting to float.
 @param aKey The key object.
 @return Float value if object not nil and have type as NSNumber or NSString, othervice 0.0.
 */
- (CGFloat) cgFloatForKey:(nonnull id) aKey;


/**
 @brief Get boolean value from JSON object.
 @detailed Checking for nil and object type for getting value.
 @param aKey The key object.
 @return Boolean value if object not nil and have type as NSNumber or NSString, othervice NO. In case if type is NSString trying compare with string "true".
 */
- (BOOL) booleanForKey:(nonnull id) aKey;


/**
 @brief Get non empty string value from JSON object.
 @detailed Checking for object type for getting value.
 In a case of NSNumber object, returns number localized description with en-US locale.
 @param aKey The key object.
 @return NSString value if have type NSString and it's length greater then zero, othervice nil.
 */
- (nullable NSString *) nonEmptyStringForKey:(nonnull id) aKey;


/**
 @brief Get number object for key.
 @param aKey The key object.
 @return Number object or nil if finded object is not number or nil.
 */
- (nullable NSNumber *) numberForKey:(nonnull id) aKey;


/**
 @brief Get string object for key.
 @detailed In a case of NSNumber object, returns number localized description with en-US locale.
 @param aKey The key object.
 @return String object or nil if finded object is not string or nil.
 */
- (nullable NSString *) stringForKey:(nonnull id) aKey;


/**
 @brief Get array object for key.
 @param aKey The key object.
 @return Array object or nil if finded object is not array or nil.
 */
- (nullable NSArray *) arrayForKey:(nonnull id) aKey;


/**
 @brief Get dictionary object for key.
 @param aKey The key object.
 @return Dictionary object or nil if finded object is not dictionary or nil.
 */
- (nullable NSDictionary *) dictionaryForKey:(nonnull id) aKey;

@end