// FUN_015510cc @ 015510cc size=852 calls_out=20 calls_in=1
// strings: 

void FUN_015510cc(undefined4 *param_1,undefined2 *param_2)

{
  byte bVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  uint local_17c;
  undefined1 auStack_178 [136];
  uint local_f0 [34];
  uint local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  uint local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  uint local_28;
  
  pbVar11 = *(byte **)(param_2 + 2);
  uVar8 = 0x19f;
  bVar1 = *pbVar11;
  uVar7 = (uint)bVar1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  case 1:
    uVar8 = 0x2cb;
    break;
  case 2:
    uVar8 = 0x2cc;
    break;
  case 3:
    iVar4 = FUN_0173b2e0(0x3b4,0);
    if (iVar4 == 0) goto LAB_015513b4;
    iVar5 = FUN_0173bce8();
    if (iVar5 == 1) {
      local_f0[0] = 0;
      iVar5 = FUN_0173bd84(iVar4,local_f0);
      uVar10 = local_f0[0];
      if (iVar5 == 1) {
        FUN_01739f80(iVar4);
        if (uVar10 == 0) goto LAB_015513b4;
        FUN_016dd606(local_f0,0,0x85);
        local_48 = 0x85;
        iVar4 = FUN_0173b09c(uVar10,local_f0,&local_48);
        local_17c = local_48;
        if (iVar4 != 1) goto LAB_015513cc;
        local_48 = FUN_01739fe0(uVar10);
        if (local_48 != 1) {
                    /* WARNING: Subroutine does not return */
          FUN_015f3600(&DAT_00568c80,&local_48,&DAT_0033d89f,&DAT_01857738);
        }
        FUN_016dd1aa(auStack_178,local_f0,0x85);
        uVar7 = 3;
        goto LAB_0155132c;
      }
    }
    goto LAB_015513ac;
  }
  iVar4 = FUN_0173b2e0(0x198,0);
  if (iVar4 != 0) {
    iVar5 = FUN_0173bce8();
    if ((iVar5 == 1) && (iVar5 = FUN_0173c154(iVar4,uVar8), iVar5 == 1)) {
      local_f0[0] = 0;
      iVar5 = FUN_0173bd84(iVar4,local_f0);
      uVar10 = local_f0[0];
      if (iVar5 == 1) {
        FUN_01739f80(iVar4);
        if (uVar10 == 0) goto LAB_015513b4;
        FUN_016dd606(local_f0,0,0x85);
        FUN_016e0f64(&local_68,local_f0,0x85);
        iVar4 = FUN_0173acc0(uVar10);
        if (((iVar4 != 0) && (iVar5 = FUN_0172ca8c(), iVar5 != 0)) &&
           (iVar4 = FUN_0172cabc(iVar4), iVar4 != 0)) {
          iVar4 = FUN_016e956c(&local_68,iVar5,iVar4,4,0);
          if (iVar4 == 1) {
            local_48 = local_68;
            uStack_44 = uStack_64;
            uStack_40 = uStack_60;
            local_3c = local_5c;
            uStack_38 = uStack_58;
            uStack_34 = uStack_54;
            uStack_30 = uStack_50;
            local_2c = 0;
            local_28 = 0;
            iVar4 = FUN_016e1360(&local_48,&local_2c,&local_28);
            local_17c = local_28;
            FUN_016e0fd8(&local_48);
            if (iVar4 == 1) {
              local_48 = FUN_01739fe0(uVar10);
              if (local_48 != 1) {
                    /* WARNING: Subroutine does not return */
                FUN_015f3600(&DAT_00568c80,&local_48,&DAT_0033d89f,&DAT_01857738);
              }
              FUN_016dd1aa(auStack_178,local_f0,0x85);
LAB_0155132c:
              FUN_016dd1aa(local_f0,auStack_178,0x85);
              uVar9 = *(uint *)(param_2 + 4);
              uVar2 = param_2[1];
              uVar3 = *param_2;
              puVar6 = (uint *)thunk_FUN_016d4a50(0xa8);
              if (puVar6 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00600874(4,0xa8);
              }
              *puVar6 = uVar7;
              puVar6[1] = uVar10;
              puVar6[2] = uVar7;
              puVar6[3] = uVar10;
              puVar6[4] = local_17c;
              FUN_016dd1aa(puVar6 + 5,local_f0,0x85);
              puVar6[0x28] = (uint)pbVar11;
              puVar6[0x29] = uVar9;
              *(undefined2 *)((int)puVar6 + 0x9e) = uVar2;
              *(undefined2 *)(puVar6 + 0x27) = uVar3;
              *param_1 = 0x80000029;
              param_1[1] = puVar6;
              param_1[2] = &DAT_018a8a20;
              return;
            }
            goto LAB_015513cc;
          }
        }
        FUN_016e0fd8(&local_68);
LAB_015513cc:
        *param_1 = 0x80000022;
        FUN_01739ee4(uVar10);
        return;
      }
    }
LAB_015513ac:
    FUN_01739f80(iVar4);
  }
LAB_015513b4:
  *param_1 = 0x80000022;
  return;
}

