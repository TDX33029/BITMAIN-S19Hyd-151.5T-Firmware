// FUN_0155c638 @ 0155c638 size=272 calls_out=8 calls_in=0
// strings: 

void FUN_0155c638(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined1 auStack_2448 [4632];
  undefined1 auStack_1230 [4632];
  
  uVar4 = FUN_0151c80c(*(undefined4 *)(*(int *)(param_2 + 4) + 8),param_3,param_4,0);
  iVar2 = (int)((ulonglong)uVar4 >> 0x20);
  iVar1 = (int)uVar4;
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_0040c722,0x16,auStack_1230,&DAT_018a8bf0,&DAT_018a8dfc);
  }
  FUN_016dd606(auStack_1230,0,0x1217);
  if (iVar2 != 0x40) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb7204(0x40,iVar2,&DAT_018a8e3c);
  }
  uVar3 = (uint)auStack_1230 | 4;
  FUN_016dd1aa(uVar3,iVar1,0x40);
  FUN_016dd1aa(auStack_2448,uVar3,0x1214);
  thunk_FUN_016d3fb4(iVar1);
  iVar1 = thunk_FUN_016d4a50(0x40);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x40);
  }
  FUN_016dd1aa(iVar1,auStack_2448,0x40);
  param_1[2] = iVar1;
  *param_1 = 0x80000029;
  param_1[1] = 0x40;
  param_1[3] = 0x40;
  return;
}

