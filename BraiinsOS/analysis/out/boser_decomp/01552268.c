// FUN_01552268 @ 01552268 size=1120 calls_out=4 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x015522f8) */
/* WARNING: Removing unreachable block (ram,0x01552370) */

void FUN_01552268(int param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 local_b4;
  int *local_b0;
  char local_ac;
  undefined1 local_ab;
  int local_a8;
  int local_a4;
  undefined1 *local_a0;
  undefined1 local_99;
  int *local_98;
  undefined *local_94;
  int local_90;
  int local_8c;
  int *local_88;
  int local_84;
  undefined *local_80;
  int **local_7c;
  undefined *local_78;
  int local_74;
  undefined *local_70;
  int local_6c;
  undefined *local_68;
  int local_64;
  undefined *local_60;
  int local_5c;
  undefined *local_58;
  int local_54;
  undefined *local_50;
  int local_4c;
  undefined *local_48;
  int local_44;
  undefined *local_40;
  int local_3c;
  undefined *local_38;
  int local_34;
  undefined *local_30;
  int **local_2c;
  undefined *local_28;
  
  local_ac = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00570fd0,8);
  local_ab = 0;
  local_b4 = 0;
  DataMemoryBarrier(0xb);
  local_b0 = param_2;
  if (*(int *)(param_1 + 0xa8) == 0) {
    uVar1 = 1;
    if (local_ac == '\0') {
      if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
        iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,"(",1);
        if (iVar2 == 0) {
          local_2c = &local_98;
          local_34 = param_1 + 100;
          local_3c = param_1 + 0x60;
          local_44 = param_1 + 0x5c;
          local_4c = param_1 + 0x58;
          local_54 = param_1 + 0x8c;
          local_5c = param_1 + 0x80;
          local_64 = param_1 + 0x74;
          local_6c = param_1 + 0x44;
          local_74 = param_1 + 0x68;
          local_7c = (int **)(param_1 + 0x30);
          local_28 = &DAT_01cfba58;
          local_30 = &DAT_01cfb874;
          local_38 = &DAT_01cfb864;
          local_40 = &DAT_01cfb854;
          local_50 = &DAT_01cfb834;
          local_58 = &DAT_01cfb834;
          local_60 = &DAT_01cfb834;
          local_98 = (int *)(param_1 + 0x98);
          local_70 = &DAT_01cfb824;
          local_48 = &DAT_01cfb844;
          local_68 = &DAT_01cfb814;
          local_78 = &DAT_01cfb814;
          local_80 = &DAT_01cfb804;
          local_84 = param_1;
          uVar1 = FUN_01304100(param_2,&DAT_004a5c9f,0x12,&DAT_01cfba68,0xc,&local_84,0xc);
        }
      }
      else {
        iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,"(\n",2);
        if (iVar2 == 0) {
          uVar1 = 1;
          local_a8 = *param_2;
          local_a4 = param_2[1];
          local_a0 = &local_99;
          local_90 = param_2[2];
          local_8c = param_2[3];
          local_99 = 1;
          local_94 = &DAT_01ce45f8;
          local_98 = &local_a8;
          local_28 = &DAT_01cfba58;
          local_2c = &local_88;
          local_30 = &DAT_01cfb874;
          local_34 = param_1 + 100;
          local_3c = param_1 + 0x60;
          local_44 = param_1 + 0x5c;
          local_38 = &DAT_01cfb864;
          local_4c = param_1 + 0x58;
          local_40 = &DAT_01cfb854;
          local_54 = param_1 + 0x8c;
          local_5c = param_1 + 0x80;
          local_64 = param_1 + 0x74;
          local_68 = &DAT_01cfb814;
          local_78 = &DAT_01cfb814;
          local_7c = (int **)(param_1 + 0x30);
          local_6c = param_1 + 0x44;
          local_88 = (int *)(param_1 + 0x98);
          local_74 = param_1 + 0x68;
          local_48 = &DAT_01cfb844;
          local_50 = &DAT_01cfb834;
          local_58 = &DAT_01cfb834;
          local_60 = &DAT_01cfb834;
          local_70 = &DAT_01cfb824;
          local_80 = &DAT_01cfb804;
          local_84 = param_1;
          iVar2 = FUN_01304100(&local_98,&DAT_004a5c9f,0x12,&DAT_01cfba68,0xc,&local_84,0xc);
          if (iVar2 == 0) {
            uVar1 = (**(code **)(local_94 + 0xc))(local_98,&DAT_005312e2,2);
          }
        }
      }
    }
  }
  else {
    uVar1 = 1;
    if (local_ac == '\0') {
      if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
        iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,"(",1);
        if (iVar2 == 0) {
          uVar1 = FUN_012fa178(*param_2,param_2[1],&DAT_00571170,0x11);
        }
      }
      else {
        iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,"(\n",2);
        if (iVar2 == 0) {
          local_7c = &local_98;
          uVar1 = 1;
          local_84 = *param_2;
          local_80 = (undefined *)param_2[1];
          local_98 = (int *)CONCAT31(local_98._1_3_,1);
          iVar2 = FUN_012fa178(&local_84,&DAT_01ce45f8,&DAT_00571170,0x11);
          if (iVar2 == 0) {
            uVar1 = FUN_01302620(&local_84,&DAT_005312e2,2);
          }
        }
      }
    }
  }
  local_b4 = 1;
  local_ac = uVar1;
  FUN_01302aa0(&local_b4);
  return;
}

