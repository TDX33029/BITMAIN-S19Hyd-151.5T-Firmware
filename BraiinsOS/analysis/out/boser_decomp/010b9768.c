// FUN_010b9768 @ 010b9768 size=280 calls_out=4 calls_in=0
// strings: 

void FUN_010b9768(undefined4 *param_1,undefined4 param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_170 [136];
  undefined8 local_e8;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int *local_40;
  int *local_3c;
  undefined1 local_38;
  
  FUN_01bed4e2(auStack_170,param_2,0x90);
  local_e8 = FUN_01a7ebb4((undefined4)local_e8,local_e8._4_4_);
  local_3c = (int *)param_1[5];
  do {
    iVar3 = *local_3c;
    bVar2 = (bool)hasExclusiveAccess(local_3c);
  } while (!bVar2);
  *local_3c = iVar3 + 1;
  if (-1 < iVar3) {
    piVar5 = (int *)param_1[4];
    do {
      iVar3 = *piVar5;
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = iVar3 + 1;
    if (-1 < iVar3) {
      uVar4 = param_1[1];
      uVar7 = param_1[2];
      uVar8 = *param_1;
      uVar6 = param_1[3];
      FUN_01bed4e2(auStack_170,param_2,0x88);
      local_38 = 0;
      local_50 = uVar8;
      local_4c = uVar4;
      local_48 = uVar7;
      local_44 = uVar6;
      local_40 = piVar5;
      iVar3 = thunk_FUN_01be5118(0x148);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(8,0x148);
      }
      FUN_01bed4e2(iVar3,auStack_170,0x148);
      piVar5 = (int *)thunk_FUN_01be5118(8);
      if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,8);
      }
      *piVar5 = iVar3;
      piVar5[1] = (int)&DAT_01c1652c;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x10b9880);
  (*pcVar1)();
}

