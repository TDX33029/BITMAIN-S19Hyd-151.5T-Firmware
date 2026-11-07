// FUN_0139d778 @ 0139d778 size=740 calls_out=8 calls_in=12
// strings: 

void FUN_0139d778(undefined4 *param_1,int param_2,ulonglong *param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  ulonglong uVar7;
  uint local_2c;
  uint local_28;
  uint local_24;
  
  iVar1 = *(int *)(param_2 + 0xac4);
  *(uint *)param_3 = 0;
  if ((iVar1 == 3) ||
     ((1 < *param_4 - 1U &&
      (*(int *)(*(int *)(param_2 + 0xae8) + 0x128) != *(int *)(*(int *)(param_2 + 0xae8) + 300)))))
  {
    uVar2 = *(uint *)(param_2 + 0xaa8);
    if ((uVar2 != 2) && (((char)param_4[6] != '\x01' || ((uint)param_4[3] < 0x81)))) {
      uVar5 = 0x200000;
      if ((uVar2 & 1) != 0) {
        uVar5 = *(int *)(param_2 + 0xaac) << 3;
      }
      uVar2 = uVar5 >> 5;
      if ((uVar5 & 0x18) != 0) {
        uVar2 = (uVar5 >> 5) + 1;
      }
      uVar5 = param_4[5] - param_4[4];
      if ((uint)param_4[5] < (uint)param_4[4]) {
        uVar5 = 0;
      }
      bVar6 = 0x7ffffff < uVar2;
      if (bVar6) {
        uVar2 = 0xffffffff;
      }
      if (!bVar6) {
        uVar2 = uVar2 << 5;
      }
      if (*(int *)(*(int *)(param_2 + 0xac0) + 0x148) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faf2a4(&DAT_018931a0);
      }
      iVar1 = FUN_018462e8(uVar2);
      uVar2 = iVar1 - 1;
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      if (uVar5 <= uVar2) {
        if (*(uint *)((int)param_3 + 0x2d4) == 0x80000000) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_01893518);
        }
        FUN_0139e1b0(&local_2c,(uint *)(param_2 + 0xaa8),(uint *)((int)param_3 + 0x2d4),param_4,
                     *(uint *)((int)param_3 + 0xc),(uint)param_3[2]);
        if (local_2c == 2) {
          local_24 = local_28;
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_24,&DAT_018935d8,&DAT_01893528);
        }
        goto LAB_0139d8c8;
      }
    }
    if ((uint)param_3[0x4d] == 0x80000000) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_01893538);
    }
    uVar7 = FUN_0139e380(param_2 + 0xa90,param_3 + 0x4d,param_4,*(uint *)((int)param_3 + 0xc),
                         (uint)param_3[2]);
    local_28 = (uint)(uVar7 >> 0x20);
    *param_3 = uVar7;
    if ((uVar7 & 1) == 0) goto LAB_0139d960;
  }
  else {
    if ((uint)param_3[0x4b] == 0x80000000) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018934f8);
    }
    FUN_0139dfe4(&local_2c,(int *)(param_2 + 0xac4),param_3 + 0x4b,param_4,
                 *(uint *)((int)param_3 + 0xc),(uint)param_3[2]);
    if (local_2c == 2) {
      local_24 = local_28;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_24,&DAT_018935d8,&DAT_01893508);
    }
LAB_0139d8c8:
    *(uint *)param_3 = local_2c;
    *(uint *)((int)param_3 + 4) = local_28;
    if ((local_2c & 1) == 0) goto LAB_0139d960;
  }
  uVar2 = 0;
  uVar4 = *(uint *)(*(uint *)((int)param_3 + 0x14) + 0x10);
  uVar5 = 1;
  if (uVar4 != 1) {
    if (uVar4 <= local_28) goto LAB_0139d960;
    uVar5 = local_28 << 1 | 1;
    uVar2 = local_28 << 1;
  }
  if (uVar2 < (uint)param_3[2]) {
    iVar1 = *(int *)(*(uint *)((int)param_3 + 0xc) + uVar2 * 4);
    if ((iVar1 != 0) && (uVar5 < (uint)param_3[2])) {
      iVar3 = *(int *)(*(uint *)((int)param_3 + 0xc) + uVar5 * 4);
      if (iVar3 != 0) {
        uVar2 = iVar3 - 1;
        uVar5 = iVar1 - 1;
        if (uVar2 < uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_003ceb44,0x25,&DAT_018935b8);
        }
        param_1[1] = uVar5;
        param_1[2] = uVar2;
        param_1[3] = local_28;
        *param_1 = 1;
        return;
      }
LAB_0139d960:
      *param_1 = 0;
      return;
    }
  }
  *param_1 = 0;
  return;
}

