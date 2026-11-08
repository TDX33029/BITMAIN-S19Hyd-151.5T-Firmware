// FUN_0078fa70 @ 0078fa70 size=488 calls_out=5 calls_in=2
// strings: 

void FUN_0078fa70(int param_1,uint param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined4 *puVar20;
  
  if (1 < param_2) {
    uVar10 = 1;
    iVar2 = param_3 + 8;
    uVar13 = 0;
    uVar5 = 0;
    do {
      uVar19 = uVar13 + 1;
      if ((uVar10 & 0xff) == 0) {
        if (uVar19 == 2) {
          uVar10 = 10;
          uVar4 = 0x1c8cfc00;
        }
        else {
          uVar10 = uVar13;
          uVar5 = uVar19;
          do {
            uVar4 = uVar5;
            uVar5 = uVar10 + 2;
            uVar10 = uVar10 + 1;
            lVar1 = (ulonglong)uVar5 * (ulonglong)uVar4;
            uVar5 = (uint)lVar1;
          } while ((int)((ulonglong)lVar1 >> 0x20) == 0);
          if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_003e116e,0x33,&DAT_01c08fac);
          }
          uVar10 = ~uVar13 + uVar10;
        }
        uVar3 = *(uint *)(param_3 + 0x148);
        if (0x3f < uVar3) {
          FUN_007a4e44(param_3 + 0x108,iVar2);
          uVar3 = 0;
        }
        lVar1 = (ulonglong)uVar4 * (ulonglong)*(uint *)(iVar2 + uVar3 * 4);
        uVar7 = (uint)lVar1;
        uVar5 = (uint)((ulonglong)lVar1 >> 0x20);
        iVar6 = uVar3 + 1;
        *(int *)(param_3 + 0x148) = iVar6;
        if (-uVar4 < uVar7) {
          if (uVar3 == 0x3f) {
            FUN_007a4e44(param_3 + 0x108,iVar2);
            iVar6 = 0;
          }
          uVar3 = *(uint *)(iVar2 + iVar6 * 4);
          *(int *)(param_3 + 0x148) = iVar6 + 1;
          uVar5 = uVar5 + CARRY4(uVar7,(uint)((ulonglong)uVar4 * (ulonglong)uVar3 >> 0x20));
        }
      }
      else {
        uVar10 = uVar10 - 1;
      }
      if ((uVar10 & 0xff) == 0) {
        uVar4 = uVar5;
      }
      else {
        uVar4 = FUN_01bf1250(uVar5,uVar19);
        uVar5 = uVar5 - uVar4 * uVar19;
      }
      if (param_2 <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar5,param_2,&DAT_01c08fbc);
      }
      puVar20 = (undefined4 *)(param_1 + uVar13 * 0x20);
      uVar8 = *puVar20;
      uVar11 = puVar20[1];
      uVar14 = puVar20[2];
      uVar17 = puVar20[3];
      uVar9 = puVar20[4];
      uVar12 = puVar20[5];
      uVar15 = puVar20[6];
      uVar18 = puVar20[7];
      puVar16 = (undefined4 *)(param_1 + uVar5 * 0x20);
      FUN_01bed864(puVar20,puVar16,0x20);
      *puVar16 = uVar8;
      puVar16[1] = uVar11;
      puVar16[2] = uVar14;
      puVar16[3] = uVar17;
      puVar16[4] = uVar9;
      puVar16[5] = uVar12;
      puVar16[6] = uVar15;
      puVar16[7] = uVar18;
      uVar13 = uVar19;
      uVar5 = uVar4;
    } while (uVar19 != param_2);
  }
  return;
}

