// FUN_0069eafc @ 0069eafc size=488 calls_out=4 calls_in=3
// strings: 

void FUN_0069eafc(undefined4 *param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  
  piVar7 = (int *)param_2[2];
  if (piVar7 == (int *)0x0) goto LAB_0069eb94;
  uVar8 = param_2[7];
  do {
    iVar3 = 0;
    if (uVar8 != 0) {
      iVar3 = param_2[3];
      uVar5 = param_2[4];
      if (uVar5 == 0) {
        puVar9 = (uint *)param_2[5];
        do {
          puVar10 = puVar9 + 1;
          uVar5 = *puVar9;
          iVar3 = iVar3 + -0x280;
          puVar9 = puVar10;
        } while ((uVar5 & 0x80808080) == 0x80808080);
        param_2[5] = (int)puVar10;
        uVar5 = uVar5 & 0x80808080 ^ 0x80808080;
        param_2[3] = iVar3;
      }
      param_2[7] = uVar8 - 1;
      param_2[4] = uVar5 - 1 & uVar5;
      iVar3 = iVar3 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                     (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) * -0xa0;
    }
    if (iVar3 != 0) {
      do {
        iVar6 = *piVar7;
        bVar2 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar2);
      *piVar7 = iVar6 + 1;
      if (iVar6 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x69ece0);
        (*pcVar1)();
      }
      param_1[1] = iVar3 + -0xa0;
      param_1[2] = iVar3 + -0x18;
      *param_1 = piVar7;
      return;
    }
LAB_0069eb94:
    iVar3 = param_2[1];
    if (iVar3 == ((int *)*param_2)[1]) {
      *param_1 = 0;
      return;
    }
    iVar6 = *(int *)*param_2;
    puVar9 = (uint *)(iVar6 + iVar3 * 0x20);
    uVar8 = *(uint *)(iVar6 + iVar3 * 0x20);
    if (uVar8 < 0xfffffff8) {
      if (*puVar9 != uVar8) {
        ClearExclusiveLocal();
        goto LAB_0069ecb4;
      }
      bVar2 = (bool)hasExclusiveAccess(puVar9);
      if (!bVar2) goto LAB_0069ecb4;
      *puVar9 = uVar8 + 4;
      DataMemoryBarrier(0xb);
    }
    else {
LAB_0069ecb4:
      FUN_0131bdb4(puVar9);
    }
    puVar10 = (uint *)puVar9[1];
    uVar11 = puVar9[2];
    uVar8 = puVar9[4];
    uVar5 = *puVar10;
    piVar7 = (int *)thunk_FUN_01be5118(0xc);
    if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0xc);
    }
    piVar4 = (int *)param_2[2];
    piVar7[1] = 1;
    piVar7[2] = (int)puVar9;
    *piVar7 = 1;
    if (piVar4 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar4;
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0068c8e0(param_2[2]);
      }
    }
    param_2[7] = uVar8;
    param_2[6] = (int)puVar10 + uVar11 + 1;
    param_2[5] = (int)(puVar10 + 1);
    param_2[4] = ~uVar5 & 0x80808080;
    param_2[3] = (int)puVar10;
    param_2[2] = (int)piVar7;
    param_2[1] = param_2[1] + 1;
  } while( true );
}

