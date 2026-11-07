// FUN_000820c4 @ 000820c4  size=120  callers=1
// program: bmminer


undefined4
FUN_000820c4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  uint in_fpscr;
  undefined4 uVar2;
  undefined1 auStack_24 [4];
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined2 local_1c;
  
  uVar2 = VectorUnsignedToFloat(param_5,(byte)(in_fpscr >> 0x16) & 3);
  iVar1 = FUN_00081ee8(uVar2,&local_20,auStack_24,0);
  if (iVar1 == 0) {
    uVar2 = FUN_0008128c(param_1,param_2,param_3,param_4,local_20,local_1f,local_1e,local_1c);
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

