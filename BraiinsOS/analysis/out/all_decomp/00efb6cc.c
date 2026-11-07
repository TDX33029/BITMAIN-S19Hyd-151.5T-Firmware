// FUN_00efb6cc @ 00efb6cc size=872 calls_out=8 calls_in=2
// strings: 

void FUN_00efb6cc(uint param_1,uint param_2,undefined1 *param_3,int *param_4)

{
  bool bVar1;
  uint *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int unaff_r4;
  uint uVar8;
  int unaff_r6;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  longlong lVar12;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  undefined1 *local_78;
  undefined4 uStack_74;
  uint local_70 [2];
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  uint local_48;
  uint local_44;
  undefined1 *local_40;
  uint local_38;
  uint local_34;
  undefined1 *local_30;
  
  uVar11 = thunk_FUN_016de0ee(param_1,8);
  puVar2 = (uint *)((int)uVar11 + (int)((ulonglong)uVar11 >> 0x20));
  if (*puVar2 < 0x7fffffff) {
    puVar3 = (undefined1 *)puVar2[6];
    if (puVar3 == (undefined1 *)0x3b9aca01) {
                    /* WARNING: Subroutine does not return */
      FUN_015f853c(&DAT_018ae900);
    }
    if (puVar3 == &DAT_3b9aca00) {
      FUN_00f54238(&local_88);
    }
    else {
      local_88 = puVar2[2];
      local_84 = puVar2[3];
      local_80 = puVar2[4];
      uStack_74 = puVar2[7];
      local_7c = puVar2[5];
      local_78 = puVar3;
    }
    bVar1 = (int)(param_2 - (local_7c + (param_1 < local_80))) < 0 !=
            (SBORROW4(param_2,local_7c) != SBORROW4(param_2 - local_7c,(uint)(param_1 < local_80)));
    if (param_1 == local_80 && param_2 == local_7c) {
      bVar1 = param_3 < local_78;
    }
    local_48 = param_1;
    local_44 = param_2;
    local_40 = param_3;
    if (bVar1) {
      local_38 = param_1;
      local_34 = param_2;
      local_30 = param_3;
      FUN_015f3c24(local_70,&local_80,&local_38);
      lVar12 = (ulonglong)local_68 * 1000 + CONCAT44(iStack_64 * 1000,local_60 / 1000000);
      uVar6 = (uint)lVar12;
      uVar4 = (uint)((ulonglong)lVar12 >> 0x20);
      bVar1 = (uint)(uVar6 <= local_88) <= local_84 - uVar4;
      uVar9 = local_84 - (uVar4 + (uVar6 > local_88));
      if (local_84 <= uVar4 && bVar1) {
        uVar9 = 0;
      }
      lVar12 = CONCAT44(uVar9,local_88 - uVar6);
      if (local_84 <= uVar4 && bVar1) {
        lVar12 = (ulonglong)uVar9 << 0x20;
      }
    }
    else {
      local_38 = local_80;
      local_34 = local_7c;
      local_30 = local_78;
      FUN_015f3c24(local_70,&local_48,&local_38);
      lVar12 = (ulonglong)local_68 * 1000 + CONCAT44(iStack_64 * 1000,local_60 / 1000000) +
               CONCAT44(local_84,local_88);
    }
    if ((local_70[0] & 1) != 0) {
      lVar12 = CONCAT44(local_84,local_88);
    }
    uVar4 = (uint)((ulonglong)lVar12 >> 0x20);
    uVar9 = (uint)lVar12;
    iVar5 = 0x14;
    if (uVar4 == 0 && (9999 < uVar9) <= uVar4) {
      if (-uVar4 < (uint)(uVar9 < 100)) goto LAB_00efb924;
LAB_00efb964:
      iVar7 = iVar5 + -2;
      uVar4 = (uint)((short)((uVar9 & 0xffff) >> 2) * 0x147b) >> 0x11;
      *(undefined2 *)((int)local_70 + iVar5 + -2) =
           *(undefined2 *)(&DAT_0040f4ca + (uVar4 * 0xff9c + uVar9 & 0xffff) * 2);
      if (9 < uVar4) goto LAB_00efb934;
LAB_00efb9a8:
      unaff_r4 = iVar7 + -1;
      *(byte *)((int)local_70 + iVar7 + -1) = (byte)uVar4 | 0x30;
    }
    else {
      iVar7 = 0;
      do {
        iVar5 = iVar7;
        iVar10 = (int)((ulonglong)lVar12 >> 0x20);
        uVar8 = (uint)lVar12;
        lVar12 = FUN_01846088(uVar8,iVar10,10000,0);
        uVar9 = (uint)lVar12;
        uVar6 = uVar9 * 0xd8f0 + uVar8;
        uVar4 = (uint)((short)((uVar6 & 0xffff) >> 2) * 0x147b) >> 0x11;
        *(undefined2 *)((int)&local_60 + iVar5) = *(undefined2 *)(&DAT_0040f4ca + uVar4 * 2);
        *(undefined2 *)((int)&local_60 + iVar5 + 2) =
             *(undefined2 *)(&DAT_0040f4ca + (uVar4 * 0xff9c + uVar6 & 0xffff) * 2);
        iVar7 = iVar5 + -4;
      } while ((uint)(uVar8 < 100000000) <= (uint)-iVar10);
      iVar5 = iVar5 + 0x10;
      if ((uint)(uVar9 < 100) <= (uint)-(int)((ulonglong)lVar12 >> 0x20)) goto LAB_00efb964;
LAB_00efb924:
      uVar9 = (uint)((ulonglong)lVar12 >> 0x20);
      uVar4 = (uint)lVar12;
      iVar7 = iVar5;
      if (uVar9 == 0 && (9 < uVar4) <= uVar9) goto LAB_00efb9a8;
LAB_00efb934:
      unaff_r4 = iVar7 + -2;
      *(undefined2 *)((int)local_70 + iVar7 + -2) = *(undefined2 *)(&DAT_0040f4ca + uVar4 * 2);
    }
    param_2 = 0x14 - unaff_r4;
    unaff_r6 = param_4[2];
    if (param_2 <= (uint)(*param_4 - unaff_r6)) goto LAB_00efb9d0;
  }
  else {
    FUN_00fb71b0(&DAT_0187bdd8);
  }
  FUN_00edff4c(param_4,unaff_r6,param_2,1,1);
  unaff_r6 = param_4[2];
LAB_00efb9d0:
  FUN_016dd1aa(param_4[1] + unaff_r6,(int)local_70 + unaff_r4,param_2);
  param_4[2] = unaff_r6 + param_2;
  return;
}

