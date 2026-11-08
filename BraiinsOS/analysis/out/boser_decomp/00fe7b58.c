// FUN_00fe7b58 @ 00fe7b58 size=980 calls_out=17 calls_in=1
// strings: 

void FUN_00fe7b58(undefined1 *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  char local_50;
  char local_4f;
  char local_4e;
  int *local_4c;
  int local_48;
  undefined1 local_44;
  undefined4 local_40;
  int *local_3c;
  int *local_38 [2];
  undefined4 local_30;
  int *local_2c;
  undefined1 uStack_25;
  
  FUN_012c3960(&local_50);
  if (local_50 == '\x01') goto LAB_00fe7bdc;
  bVar9 = local_4f == '\x01';
  if (bVar9) {
    local_4f = local_4e;
  }
  if (bVar9 && local_4f == 'n') {
    FUN_012c6160(param_2 + 0xc);
    local_4c = (int *)FUN_012c3a60(param_2,"ull",3);
    if (local_4c != (int *)0x0) goto LAB_00fe7bdc;
    uVar3 = 4;
LAB_00fe7e70:
    param_1[1] = uVar3;
    uVar3 = 0;
  }
  else {
    FUN_012c3960(&local_30,param_2);
    if ((char)local_30 == '\x01') {
      local_4c = local_2c;
    }
    else if (local_30._1_1_ == '\x01') {
      if (local_30._2_1_ == '[') {
        cVar2 = *(char *)(param_2 + 0x40) + -1;
        *(char *)(param_2 + 0x40) = cVar2;
        if (cVar2 == '\0') {
LAB_00fe7eb8:
          uVar5 = *(undefined4 *)(param_2 + 0x30);
          uVar6 = *(undefined4 *)(param_2 + 0x34);
          local_40 = (undefined4 *)0x18;
          goto LAB_00fe7ec0;
        }
        FUN_012c6160(param_2 + 0xc);
        local_2c = (int *)CONCAT31(local_2c._1_3_,1);
        local_30 = (undefined4 *)param_2;
        FUN_012c54a0(&local_40,&local_30);
        if ((char)local_40 == '\x01') {
LAB_00fe7d7c:
          local_30 = (undefined4 *)&DAT_00000001;
        }
        else {
          if (local_40._1_1_ != '\x01') {
            local_3c = (int *)FUN_012cc2c0(0,&DAT_01c1af24,&DAT_01d064b8);
            goto LAB_00fe7d7c;
          }
          FUN_00fe5ad0(&local_40,local_30);
          if ((char)local_40 == '\x01') goto LAB_00fe7d7c;
          local_3c = (int *)(uint)local_40._1_1_;
          local_30 = (undefined4 *)((int)local_3c << 8);
        }
        *(char *)(param_2 + 0x40) = *(char *)(param_2 + 0x40) + '\x01';
        local_2c = local_3c;
        local_38[0] = (int *)FUN_012c4e3c(param_2);
        local_3c = local_2c;
        local_40 = local_30;
        if (((uint)local_30 & 1) == 0) goto LAB_00fe7e60;
        piVar4 = local_2c;
        if (local_38[0] != (int *)0x0) {
LAB_00fe7e90:
          piVar4 = local_2c;
          local_40 = local_30;
          local_3c = local_2c;
          FUN_00f80260(local_38);
        }
      }
      else if (local_30._2_1_ == '{') {
        cVar2 = *(char *)(param_2 + 0x40) + -1;
        *(char *)(param_2 + 0x40) = cVar2;
        if (cVar2 == '\0') goto LAB_00fe7eb8;
        FUN_012c6160(param_2 + 0xc);
        uVar8 = 4;
        local_44 = 1;
        local_48 = param_2;
LAB_00fe7c40:
        do {
          FUN_012c4f64(&local_40,&local_48);
          iVar1 = local_48;
          local_2c = local_3c;
          if ((char)local_40 == '\x01') goto LAB_00fe7d8c;
          local_2c = (int *)((uint)local_40 >> 8 & 0xff);
          if (local_2c != (int *)&DAT_00000001) {
            if (uVar8 == 4) {
              uVar8 = 3;
            }
            local_30 = (undefined4 *)(uVar8 << 8);
            goto LAB_00fe7e24;
          }
          iVar7 = local_48 + 0xc;
          FUN_012c6160(iVar7);
          *(undefined4 *)(iVar1 + 8) = 0;
          FUN_012c6380(&local_40,iVar7,iVar1);
          local_2c = local_3c;
          if (local_40 == (undefined4 *)0x2) {
LAB_00fe7d8c:
            local_30 = (undefined4 *)&DAT_00000001;
            goto LAB_00fe7e24;
          }
          if ((local_38[0] == (int *)&SUB_00000004) && (*local_3c == 0x65646f6d)) {
            if (uVar8 != 4) {
              local_40 = &local_30;
              local_3c = (int *)&DAT_0132b6a0;
              local_2c = (int *)0x4;
              local_30 = (undefined4 *)&DAT_0056d358;
              local_2c = (int *)FUN_019676ac(&DAT_005ab34f,&local_40);
              goto LAB_00fe7d8c;
            }
            local_2c = (int *)FUN_012c4d2c(iVar1);
            if (local_2c != (int *)0x0) break;
            FUN_00fe5ad0(&local_40,iVar1);
            if ((char)local_40 != '\0') {
              local_2c = local_3c;
              break;
            }
            uVar8 = (uint)local_40 >> 8 & 0xff;
            goto LAB_00fe7c40;
          }
          local_2c = (int *)FUN_012c50c0(iVar1);
        } while (local_2c == (int *)0x0);
        local_30 = (undefined4 *)&DAT_00000001;
LAB_00fe7e24:
        *(char *)(param_2 + 0x40) = *(char *)(param_2 + 0x40) + '\x01';
        local_38[0] = (int *)FUN_012c4db0(param_2);
        local_3c = local_2c;
        local_40 = local_30;
        if (((uint)local_30 & 1) != 0) {
          piVar4 = local_2c;
          if (local_38[0] == (int *)0x0) goto LAB_00fe7e98;
          goto LAB_00fe7e90;
        }
LAB_00fe7e60:
        piVar4 = local_38[0];
        local_40 = local_30;
        local_3c = local_2c;
        if (local_38[0] == (int *)0x0) {
          uVar3 = (undefined1)((uint)local_30 >> 8);
          goto LAB_00fe7e70;
        }
      }
      else {
        piVar4 = (int *)FUN_012c4a28(param_2,&uStack_25,&DAT_01c1cfb8);
      }
LAB_00fe7e98:
      local_4c = (int *)FUN_012c6694(piVar4,*(undefined4 *)(param_2 + 0x30),
                                     *(undefined4 *)(param_2 + 0x34));
    }
    else {
      uVar5 = *(undefined4 *)(param_2 + 0x30);
      uVar6 = *(undefined4 *)(param_2 + 0x34);
      local_40 = (undefined4 *)0x5;
LAB_00fe7ec0:
      local_4c = (int *)FUN_01966fbc(&local_40,uVar5,uVar6);
    }
LAB_00fe7bdc:
    *(int **)(param_1 + 4) = local_4c;
    uVar3 = 1;
  }
  *param_1 = uVar3;
  return;
}

