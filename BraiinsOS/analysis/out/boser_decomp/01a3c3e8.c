// FUN_01a3c3e8 @ 01a3c3e8 size=772 calls_out=6 calls_in=1
// strings: 

void FUN_01a3c3e8(int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  byte bVar8;
  int *local_3c;
  int *local_38;
  int *local_34;
  byte local_30;
  int *local_2c;
  byte local_28;
  
  param_1 = param_1 + 0x18;
  FUN_01656cb0(&local_38,param_1);
  if (local_38 == (int *)0x1) {
    local_28 = local_30;
    local_2c = local_34;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_2c,&DAT_01d2bd10,&DAT_01d2bc70);
  }
  iVar3 = local_34[7];
  local_34[7] = iVar3 + -1;
  FUN_00a97e8c(local_34,local_30);
  if (iVar3 + -1 == 0) {
    FUN_01656cb0(&local_38,param_1);
    if (local_38 == (int *)0x1) {
      local_28 = local_30;
      local_2c = local_34;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533467,0x2b,&local_2c,&DAT_01d2bd10,&DAT_01d2bca0);
    }
    piVar6 = (int *)local_34[5];
    piVar5 = local_34;
    bVar8 = local_30;
    if (piVar6 != (int *)0x0) {
      do {
        do {
          iVar3 = *piVar6;
          bVar2 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar2);
        *piVar6 = iVar3 + 1;
        if (iVar3 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0x1a3c6f8);
          (*pcVar1)();
        }
        piVar7 = piVar6 + 6;
        do {
          local_3c = piVar6;
          if (*piVar7 != 0) {
            ClearExclusiveLocal();
            FUN_00a97e8c(piVar5,bVar8 & 1);
            FUN_01656cb0(&local_38,piVar7);
            piVar7 = local_34;
            if (local_38 != (int *)0x0) {
              local_28 = local_30;
              local_2c = local_34;
                    /* WARNING: Subroutine does not return */
              FUN_013073dc(&DAT_00533467,0x2b,&local_2c,&DAT_01d2bd10,&DAT_01d2bcc0);
            }
            uVar4 = (uint)local_30;
            FUN_01656cb0(&local_38,param_1);
            if (local_38 == (int *)0x1) {
              local_28 = local_30;
              local_2c = local_34;
                    /* WARNING: Subroutine does not return */
              FUN_013073dc(&DAT_00533467,0x2b,&local_2c,&DAT_01d2bd10,&DAT_01d2bcd0);
            }
            piVar5 = local_34;
            bVar8 = local_30;
            goto LAB_01a3c51c;
          }
          bVar2 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar2);
        *piVar7 = 1;
        DataMemoryBarrier(0xb);
        uVar4 = 0;
        if ((DAT_01d51b08 & 0x7fffffff) != 0) {
          uVar4 = FUN_0197ac0c();
          uVar4 = uVar4 ^ 1;
        }
        if ((char)piVar6[7] != '\0') {
          local_34 = (int *)CONCAT31(local_34._1_3_,(char)uVar4);
          local_38 = piVar7;
                    /* WARNING: Subroutine does not return */
          FUN_013073dc(&DAT_00533467,0x2b,&local_38,&DAT_01d2bd10,&DAT_01d2bcb0);
        }
LAB_01a3c51c:
        if ((int *)piVar5[5] == piVar6) {
          FUN_01a3c938(piVar5,bVar8 & 1,piVar7,uVar4);
          DataMemoryBarrier(0xb);
          do {
            iVar3 = *piVar6;
            bVar2 = (bool)hasExclusiveAccess(piVar6);
          } while (!bVar2);
          *piVar6 = iVar3 + -1;
          if (iVar3 == 1) {
            DataMemoryBarrier(0xb);
            FUN_01a3b144(&local_3c);
            return;
          }
          return;
        }
        FUN_00a97e8c(piVar7,uVar4);
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar6;
          bVar2 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar2);
        *piVar6 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01a3b144(&local_3c);
        }
        piVar6 = (int *)piVar5[5];
      } while (piVar6 != (int *)0x0);
    }
    FUN_01a3c938(piVar5,bVar8 & 1);
  }
  return;
}

