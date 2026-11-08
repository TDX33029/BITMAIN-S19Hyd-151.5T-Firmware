// FUN_01756d78 @ 01756d78 size=164 calls_out=1 calls_in=6
// strings: 

undefined8 FUN_01756d78(int param_1,uint param_2)

{
  int iVar1;
  
  if ((param_1 == 0) || (((param_2 & 0xffffff7f) != 0x100 && param_2 != 0xe0 && (param_2 != 0x200)))
     ) {
    return 0;
  }
  iVar1 = FUN_016dd606(param_1,0,200);
  *(undefined4 *)(iVar1 + 0xd0) = 0;
  *(uint *)(iVar1 + 0xcc) = param_2 >> 3;
  *(uint *)(iVar1 + 200) = (800 - param_2 & 0x7fffffff) >> 2;
  *(undefined2 *)(iVar1 + 0x17c) = 6;
  return 1;
}

