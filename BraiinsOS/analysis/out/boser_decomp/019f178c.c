// FUN_019f178c @ 019f178c size=164 calls_out=5 calls_in=4
// strings: 

void FUN_019f178c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [80];
  
  uVar3 = FUN_019ef7f4(&DAT_01d298a0);
  uVar2 = (undefined4)((ulonglong)uVar3 >> 0x20);
  FUN_019dc4f8(auStack_68,(int)uVar3,uVar2,uVar2,param_3,param_4,param_5,&DAT_01d298a0);
  iVar1 = thunk_FUN_01be5118(0x50);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x50);
  }
  FUN_01bed4e2(iVar1,auStack_68,0x50);
  *param_1 = param_7;
  param_1[1] = param_8;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[2] = param_9;
  param_1[4] = iVar1;
  return;
}

