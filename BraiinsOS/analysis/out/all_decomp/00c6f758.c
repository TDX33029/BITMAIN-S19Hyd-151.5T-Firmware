// FUN_00c6f758 @ 00c6f758 size=392 calls_out=5 calls_in=2
// strings: 

void FUN_00c6f758(int *param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  longlong lVar15;
  undefined8 uVar16;
  uint local_48 [3];
  int local_3c;
  uint local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  uint local_28;
  
  local_48[2] = *param_1;
  local_3c = param_1[1];
  uVar7 = param_1[2];
  uVar8 = 0;
  local_28 = 0;
  if (local_48[2] != 0) {
    local_28 = uVar7;
  }
  local_48[0] = (uint)(local_48[2] != 0);
  local_34 = 0;
  local_48[1] = 0;
  local_38 = local_48[0];
  local_30 = local_48[2];
  local_2c = local_3c;
  while( true ) {
    uVar16 = FUN_00c3901c(local_48);
    iVar2 = (int)((ulonglong)uVar16 >> 0x20);
    if ((int)uVar16 == 0 || iVar2 == 0) break;
    iVar12 = *(int *)(iVar2 + 0x28);
    if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_0034ae54,0x2d,&DAT_0186ac08);
    }
    iVar2 = *(int *)(iVar2 + 0x24);
    iVar13 = 0;
    lVar1 = 0;
    do {
      iVar3 = iVar2 + iVar13 * 0x18;
      iVar6 = *(int *)(iVar3 + 0x14);
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_0034ae25,0x39,&DAT_0186aba8);
      }
      iVar10 = iVar6 << 2;
      iVar5 = 0;
      puVar11 = *(uint **)(iVar3 + 0x10);
      uVar4 = 0;
      do {
        if (*(uint *)(iVar3 + 8) <= *puVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_0034ae41,0x13,&DAT_0186abb8);
        }
        uVar9 = *(uint *)(*(int *)(iVar3 + 4) + *puVar11 * 4);
        puVar11 = puVar11 + 1;
        bVar14 = CARRY4(uVar4,uVar9);
        uVar4 = uVar4 + uVar9;
        iVar5 = iVar5 + (uint)bVar14;
        iVar10 = iVar10 + -4;
      } while (iVar10 != 0);
      lVar15 = FUN_01846088(uVar4,iVar5,iVar6,0);
      lVar1 = lVar15 + lVar1;
      iVar13 = iVar13 + 1;
    } while (iVar13 != iVar12);
    iVar2 = FUN_01846088((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),iVar12,0);
    uVar8 = uVar8 + iVar2;
  }
  if (uVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faf2a4(&DAT_01874078);
  }
  if (uVar7 == 0) {
    FUN_018460ac(0);
    return;
  }
  if (uVar7 == 1) {
    return;
  }
  if (uVar8 < uVar7) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01846318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_018464d7 + (LZCOUNT(uVar7) - LZCOUNT(uVar8)) * -0xe))();
  return;
}

