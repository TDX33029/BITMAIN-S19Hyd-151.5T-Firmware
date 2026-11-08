// FUN_016ce3d0 @ 016ce3d0 size=700 calls_out=11 calls_in=2
// strings: 

void FUN_016ce3d0(undefined4 param_1,undefined1 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_68;
  int local_64;
  int local_60;
  uint local_5c;
  uint uStack_58;
  int local_50;
  int local_4c;
  uint local_48;
  uint local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38 [6];
  undefined4 local_20 [2];
  
  puVar3 = &local_68;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_2) {
  case 0:
    puVar3 = &local_40;
    FUN_016df848(&local_3c,param_2,0,0x10ffff);
    local_40 = 0;
    break;
  case 1:
    FUN_016de7a8(&local_3c,0xff00);
    goto LAB_016ce5a0;
  case 2:
    FUN_016df848(&local_68,param_2,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 4));
    FUN_016df9f4(&local_68);
    local_3c = local_68;
    local_38[0] = local_64;
    local_38[1] = local_60;
    local_38[2] = local_5c;
    local_40 = 0;
    goto LAB_016ce680;
  case 3:
    iVar5 = 0;
    local_38[3] = 0x10ffff;
    local_38[2] = 0xb;
    local_38[1] = 9;
    local_38[0] = 0;
    local_4c = FUN_01298504(0x10,4);
    if (local_4c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(4,0x10);
    }
    local_38[4] = 2;
    local_20[0] = 0;
    do {
      uVar4 = *(undefined4 *)((int)local_38 + iVar5);
      puVar1 = (undefined4 *)(local_4c + 4 + iVar5);
      *puVar1 = *(undefined4 *)((int)local_38 + iVar5 + 4);
      iVar5 = iVar5 + 8;
      puVar1[-1] = uVar4;
    } while (iVar5 != 0x10);
    local_50 = 2;
    local_44 = local_44 & 0xffffff00;
    local_48 = 2;
    local_38[5] = local_4c;
    FUN_016f5e30(&local_50);
    local_64 = local_50;
    local_60 = local_4c;
    local_5c = local_48;
    uStack_58 = local_44;
    local_68 = 0;
    break;
  case 4:
    local_38[3] = 0x10ffff;
    local_38[2] = 0xe;
    local_38[1] = 0xc;
    local_38[0] = 0xb;
    local_3c = 9;
    local_40 = 0;
    FUN_016df8e0(&local_64,&local_40);
    local_68 = 0;
    puVar3 = &local_68;
    break;
  case 5:
    FUN_016de7a8(&local_68,CONCAT11(param_2[1],param_2[1]));
    FUN_016de88c(&local_68);
    local_3c = local_68;
    local_38[0] = local_64;
    local_38[1] = local_60;
    local_38[2] = local_5c;
    local_40 = 1;
    goto LAB_016ce680;
  case 6:
    local_20[0] = 0xff0b0900;
    local_64 = FUN_01298504(4,1);
    if (local_64 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,4);
    }
    local_50 = 2;
    local_48 = 0;
    iVar5 = 0;
    do {
      iVar2 = iVar5 + 2;
      *(undefined2 *)(local_64 + iVar5) = *(undefined2 *)((int)local_20 + iVar5);
      iVar5 = iVar2;
    } while (iVar2 != 4);
    local_68 = 2;
    local_5c = local_5c & 0xffffff00;
    local_60 = 2;
    local_4c = local_64;
    FUN_016f6050(&local_68);
    local_3c = local_68;
    local_38[0] = local_64;
    local_38[1] = local_60;
    local_38[2] = local_5c;
    local_40 = 1;
LAB_016ce680:
    puVar3 = &local_40;
    local_68 = local_3c;
    local_64 = local_38[0];
    local_60 = local_38[1];
    local_5c = local_38[2];
    break;
  case 7:
    local_64 = CONCAT22(local_64._2_2_,0xff0e);
    local_68 = 0xc0b0900;
    FUN_016de6e0(&local_3c,&local_68);
LAB_016ce5a0:
    local_40 = 1;
    puVar3 = &local_40;
  }
  FUN_016d38a0(param_1,puVar3);
  return;
}

