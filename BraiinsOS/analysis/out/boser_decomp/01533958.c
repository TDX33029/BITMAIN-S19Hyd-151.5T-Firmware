// FUN_01533958 @ 01533958 size=464 calls_out=6 calls_in=2
// strings: 

undefined4 FUN_01533958(int *param_1,char *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 uVar8;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  undefined8 uVar12;
  int local_44 [3];
  undefined4 local_38;
  int *local_34;
  undefined4 local_30;
  undefined8 local_2c;
  
  uVar8 = 0;
  if (*param_2 == '\x04') {
    if (*(int *)(param_2 + 0xc) != 0) {
      FUN_015752f0(local_44,param_1[2]);
                    /* WARNING: Could not recover jumptable at 0x015339e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (*(code *)(&DAT_015339e8 + *(int *)(&DAT_015339e8 + local_44[0] * 4)))();
      return uVar8;
    }
    uVar8 = 0;
    if (*param_1 != 0 || param_1[1] != 0) {
      piVar10 = (int *)param_1[3];
      do {
        iVar3 = *piVar10;
        bVar2 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar2);
      *piVar10 = iVar3 + 1;
      if (iVar3 < 0) {
LAB_01533c00:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x1533c00);
        (*pcVar1)();
      }
      iVar3 = param_1[4];
      if (param_4 == 0) {
        local_44[0] = 0;
      }
      else {
        DataMemoryBarrier(0xb);
        if (*(int *)(param_4 + 0x14) != 0) {
          FUN_0154f894((undefined4 *)(param_4 + 0xc),param_4);
        }
        piVar7 = *(int **)(param_4 + 0xc);
        do {
          iVar4 = *piVar7;
          bVar2 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar2);
        *piVar7 = iVar4 + 1;
        if (iVar4 < 0) goto LAB_01533c00;
        uVar6 = 0;
        iVar4 = param_1[3];
        uVar8 = *(undefined4 *)(param_4 + 0x10);
        uVar11 = param_1[4];
        uVar9 = (*(int **)(param_4 + 4))[1];
        if (uVar9 <= uVar11) {
          iVar5 = thunk_FUN_01bed842(**(int **)(param_4 + 4) + 8,iVar4 + 8,uVar9);
          uVar6 = uVar9;
          if (iVar5 != 0) {
            uVar6 = 0;
          }
        }
        local_2c = FUN_016bc0ec(iVar4 + 8 + uVar6,uVar11 - uVar6);
        local_38 = 3;
        local_44[0] = 2;
        local_34 = piVar7;
        local_30 = uVar8;
      }
      uVar12 = FUN_01531840(param_3);
      uVar8 = FUN_01596344(piVar10,iVar3,local_44,(int)uVar12,(int)((ulonglong)uVar12 >> 0x20),
                           param_2);
    }
  }
  return uVar8;
}

