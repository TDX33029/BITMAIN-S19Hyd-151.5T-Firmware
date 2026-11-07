// FUN_01645eec @ 01645eec size=88 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_01645eec(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puStack_18;
  undefined1 *puStack_14;
  
  iVar1 = FUN_01645f50();
  uVar2 = 0;
  if (iVar1 == 0) {
    puStack_18 = &DAT_01d065a4;
    puStack_14 = &LAB_018a13b8;
    uVar2 = FUN_012fa178(*param_2,param_2[1],&DAT_00590e5f,&puStack_18);
  }
  return uVar2;
}

