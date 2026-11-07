// FUN_01533330 @ 01533330 size=452 calls_out=6 calls_in=2
// strings: 

undefined4 FUN_01533330(int param_1,char *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  undefined8 uVar12;
  int local_44 [3];
  undefined4 local_38;
  int *local_34;
  undefined4 local_30;
  undefined8 local_2c;
  
  uVar3 = 0;
  if (*param_2 == '\x04') {
    if (*(int *)(param_2 + 0xc) != 0) {
      FUN_015752f0(local_44,*(undefined4 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x015333c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)(&DAT_015333cc + *(int *)(&DAT_015333cc + local_44[0] * 4)))();
      return uVar3;
    }
    piVar10 = *(int **)(param_1 + 0xc);
    do {
      iVar4 = *piVar10;
      bVar2 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar2);
    *piVar10 = iVar4 + 1;
    if (iVar4 < 0) {
LAB_015336e8:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x15336e8);
      (*pcVar1)();
    }
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    if (param_4 == 0) {
      local_44[0] = 0;
    }
    else {
      DataMemoryBarrier(0xb);
      if (*(int *)(param_4 + 0x14) != 0) {
        FUN_0154f894((undefined4 *)(param_4 + 0xc),param_4);
      }
      piVar8 = *(int **)(param_4 + 0xc);
      do {
        iVar4 = *piVar8;
        bVar2 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar2);
      *piVar8 = iVar4 + 1;
      if (iVar4 < 0) goto LAB_015336e8;
      uVar11 = *(uint *)(param_1 + 0x10);
      uVar6 = *(undefined4 *)(param_4 + 0x10);
      uVar9 = (*(int **)(param_4 + 4))[1];
      iVar4 = *(int *)(param_1 + 0xc) + 8;
      uVar7 = 0;
      if (uVar9 <= uVar11) {
        iVar5 = thunk_FUN_01bed842(**(int **)(param_4 + 4) + 8,iVar4,uVar9);
        uVar7 = uVar9;
        if (iVar5 != 0) {
          uVar7 = 0;
        }
      }
      local_2c = FUN_016bc0ec(iVar4 + uVar7,uVar11 - uVar7);
      local_38 = 3;
      local_44[0] = 2;
      local_34 = piVar8;
      local_30 = uVar6;
    }
    uVar12 = FUN_01531840(param_3);
    uVar3 = FUN_01596344(piVar10,uVar3,local_44,(int)uVar12,(int)((ulonglong)uVar12 >> 0x20),param_2
                        );
  }
  return uVar3;
}

