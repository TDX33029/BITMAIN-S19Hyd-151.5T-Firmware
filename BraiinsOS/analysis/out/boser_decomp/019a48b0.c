// FUN_019a48b0 @ 019a48b0 size=324 calls_out=1 calls_in=1
// strings: assertion failed: len >= size_of::<c::sockaddr_in>() | assertion failed: len >= size_of::<c::sockaddr_in6>()

void FUN_019a48b0(short *param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  short *psVar4;
  short sVar5;
  uint uVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  uint uVar11;
  undefined *puVar12;
  
  iVar8 = *(int *)(param_2 + 4);
  if (*(int *)(param_2 + 4) != 0) {
    do {
      psVar4 = *(short **)(iVar8 + 0x14);
      iVar3 = *(int *)(iVar8 + 0x1c);
      if (*psVar4 == 10) {
        uVar10 = *(uint *)(iVar8 + 0x10);
        *(int *)(param_2 + 4) = iVar3;
        if (uVar10 < 0x1c) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("assertion failed: len >= size_of::<c::sockaddr_in6>()",0x35,&DAT_01d278d0);
        }
        sVar5 = 1;
        unaff_r10 = *(undefined4 *)(psVar4 + 2);
        uVar11 = 0;
        puVar12 = *(undefined **)(psVar4 + 6);
        uVar7 = psVar4[1] << 8 | (ushort)psVar4[1] >> 8;
        unaff_r8 = *(undefined4 *)(psVar4 + 8);
        unaff_r9 = *(undefined4 *)(psVar4 + 10);
        uVar9 = *(uint *)(psVar4 + 0xc);
        uVar2 = psVar4[5];
        uVar6 = (uint)(ushort)psVar4[4];
        uVar10 = (uint)((ushort)psVar4[4] >> 8);
LAB_019a4980:
        uVar1 = *(ushort *)(param_2 + 8);
        *(uint *)(param_1 + 0xc) = uVar9;
        *(undefined **)(param_1 + 4) = puVar12;
        if (sVar5 == 0) {
          uVar2 = uVar1;
          uVar1 = uVar7;
        }
        *param_1 = sVar5;
        *(undefined4 *)(param_1 + 6) = unaff_r8;
        *(undefined4 *)(param_1 + 8) = unaff_r9;
        *(undefined4 *)(param_1 + 10) = unaff_r10;
        param_1[0xe] = uVar1;
        *(uint *)(param_1 + 1) = uVar10 << 0x18 | (uVar6 & 0xff) << 0x10 | uVar11;
        param_1[3] = uVar2;
        return;
      }
      if (*psVar4 == 2) {
        uVar9 = *(uint *)(iVar8 + 0x10);
        *(int *)(param_2 + 4) = iVar3;
        if (uVar9 < 0x10) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("assertion failed: len >= size_of::<c::sockaddr_in>()",0x34,&DAT_01d278c0);
        }
        uVar6 = *(uint *)(psVar4 + 2);
        uVar2 = psVar4[1] << 8 | (ushort)psVar4[1] >> 8;
        uVar11 = uVar6 & 0xffff;
        puVar12 = &DAT_01d278e0;
        uVar10 = uVar6 >> 0x18;
        uVar6 = uVar6 >> 0x10;
        sVar5 = 0;
        uVar7 = 2;
        goto LAB_019a4980;
      }
      iVar8 = iVar3;
    } while (iVar3 != 0);
    *(undefined4 *)(param_2 + 4) = 0;
  }
  *param_1 = 2;
  return;
}

