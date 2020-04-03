//
//  KKMacros.h
//  SlowDemo
//
//  Created by 沈逵逵 on 2020/3/31.
//  Copyright © 2020 ewingshen. All rights reserved.
//

#ifndef KKMacros_h
#define KKMacros_h

#define DEFINE_IMPLEMENTATION_OF_INTERFACE(interface_name, imp_name) typedef id<interface_name> imp_name;

#define DEFINE_IMP_OF_INTER(name) DEFINE_IMPLEMENTATION_OF_INTERFACE(name##Interface, name)

#endif /* KKMacros_h */
