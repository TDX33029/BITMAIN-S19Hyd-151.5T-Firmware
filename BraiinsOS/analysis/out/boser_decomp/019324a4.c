// FUN_019324a4 @ 019324a4 size=364 calls_out=9 calls_in=1
// strings: 

undefined8
FUN_019324a4(int *param_1,undefined1 *param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_b0 [64];
  undefined4 local_70;
  undefined4 *local_6c;
  undefined8 local_68;
  int local_28;
  int local_24;
  
  FUN_01bed93e(auStack_b0,0,0x40);
  iVar5 = *param_1;
  if (param_2 == (undefined1 *)0x0) {
    param_3 = *(uint *)(iVar5 + 0xc);
    if (0x40 < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,param_3,0x40,&DAT_01d25910);
    }
    param_2 = auStack_b0;
  }
  uVar6 = FUN_016bc0ec(param_2,param_3);
  piVar3 = (int *)uVar6;
  FUN_0193a93c(&local_70,param_4,param_5);
  uVar7 = FUN_00703dd4(&local_70);
  local_6c = (undefined4 *)thunk_FUN_01be5118(0x10);
  if (local_6c == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x10);
  }
  *local_6c = 1;
  local_6c[1] = 1;
  *(undefined8 *)(local_6c + 2) = uVar7;
  do {
    iVar4 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar4 + 1;
  if (iVar4 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x19325f8);
    (*pcVar1)();
  }
  local_70 = 1;
  local_28 = iVar5;
  local_24 = iVar5;
  local_68 = uVar6;
  iVar5 = thunk_FUN_01be5118(0x50);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x50);
  }
  FUN_01bed4e2(iVar5,&local_70,0x50);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0070451c(piVar3,(int)((ulonglong)uVar6 >> 0x20));
  }
  return CONCAT44(&DAT_01d258f8,iVar5);
}

