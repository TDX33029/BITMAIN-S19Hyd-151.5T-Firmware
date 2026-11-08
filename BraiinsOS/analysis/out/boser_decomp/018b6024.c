// FUN_018b6024 @ 018b6024 size=544 calls_out=8 calls_in=1
// strings: 

void FUN_018b6024(undefined4 *param_1,undefined4 param_2)

{
  ushort uVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined *local_58;
  int iStack_54;
  undefined *puStack_50;
  undefined8 local_4c;
  uint local_44;
  undefined *local_40;
  int local_3c;
  undefined *local_38;
  undefined4 local_34;
  int local_30;
  undefined *local_2c;
  int local_28;
  
  FUN_018be778(&local_34);
  if ((char)local_34 == '\x14') {
    if ((local_34 & 0x100) == 0) {
      uVar9 = FUN_018beed0(param_2,2);
      puVar6 = &DAT_005239af;
      iVar7 = 0xb;
      iVar8 = 2;
      if (((ushort *)uVar9 != (ushort *)0x0) && ((int)((ulonglong)uVar9 >> 0x20) == 2)) {
        uVar1 = *(ushort *)uVar9;
        uVar9 = FUN_018beed0(param_2,uVar1 << 8 | uVar1 >> 8);
        if ((int)uVar9 == 0) {
          iVar7 = 10;
          iVar8 = 0;
        }
        else {
          local_44 = 0;
          local_38 = (undefined *)0x0;
          local_3c = 4;
          local_40 = (undefined *)0x0;
          if ((int)((ulonglong)uVar9 >> 0x20) != 0) {
            iVar7 = 4;
            iVar8 = 0;
            do {
              puVar6 = local_38;
              local_4c = uVar9;
              FUN_018c4324(&local_34,&local_4c);
              iVar4 = local_28;
              puVar2 = local_2c;
              iVar3 = local_30;
              if (local_34 != 0) {
                FUN_018a8274(&local_40);
                puVar6 = local_2c;
                iVar7 = local_30;
                iVar8 = local_28;
                goto LAB_018b6218;
              }
              uVar9 = local_4c;
              if (puVar6 == local_40) {
                FUN_018c4418(&local_40);
                iVar7 = local_3c;
                uVar9 = local_4c;
              }
              local_4c._4_4_ = (uint)((ulonglong)uVar9 >> 0x20);
              local_38 = puVar6 + 1;
              piVar5 = (int *)(iVar7 + iVar8);
              *piVar5 = iVar3;
              iVar8 = iVar8 + 0xc;
              piVar5[1] = (int)puVar2;
              piVar5[2] = iVar4;
            } while (local_44 < local_4c._4_4_);
          }
          puVar6 = local_38;
          iVar7 = local_3c;
          puVar2 = local_40;
          local_58 = local_40;
          iStack_54 = local_3c;
          puStack_50 = local_38;
          local_4c = uVar9;
          FUN_018c4324(&local_34,param_2);
          if (local_34 == 1) {
            FUN_018ab6b8(&local_58);
            puVar6 = local_2c;
            iVar7 = local_30;
            iVar8 = local_28;
          }
          else {
            if (puVar2 != (undefined *)0x80000000) {
              *param_1 = puVar2;
              param_1[1] = iVar7;
              param_1[2] = puVar6;
              param_1[3] = local_30;
              param_1[4] = local_2c;
              param_1[5] = local_28;
              return;
            }
            iVar8 = local_30;
          }
        }
      }
LAB_018b6218:
      param_1[2] = puVar6;
      *param_1 = 0x80000001;
      param_1[1] = iVar7;
      param_1[3] = iVar8;
    }
    else {
      FUN_018c3e74(auStack_78,param_2);
      FUN_01bed4e2((uint)auStack_68 | 2,auStack_78,0xc);
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = 0x80000000;
      *(undefined1 *)((int)param_1 + 5) = local_34._2_1_;
      FUN_01bed4e2((int)param_1 + 6,auStack_68,0xe);
    }
  }
  else {
    FUN_01bed4e2((int)param_1 + 7,(uint)&local_34 | 3,9);
    *(undefined1 *)((int)param_1 + 6) = local_34._2_1_;
    *(undefined1 *)((int)param_1 + 5) = local_34._1_1_;
    *(char *)(param_1 + 1) = (char)local_34;
    *param_1 = 0x80000001;
  }
  return;
}

