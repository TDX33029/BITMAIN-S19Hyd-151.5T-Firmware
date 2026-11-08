// FUN_01291290 @ 01291290 size=532 calls_out=9 calls_in=1
// strings: localtime

void FUN_01291290(undefined4 *param_1,char *param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined1 *local_e8 [22];
  undefined *local_90;
  undefined1 *local_8c;
  undefined **ppuStack_88;
  int local_84;
  uint local_80;
  undefined4 local_7c;
  undefined *local_78;
  undefined1 *local_74;
  undefined **local_70;
  undefined1 *local_6c;
  int local_68;
  
  if (param_2 == (char *)0x0) {
    param_3 = 9;
    param_2 = "localtime";
  }
  FUN_01288fe0(&local_78,param_2,param_3);
  if (local_78 == (undefined *)0x1) {
    local_e8[0] = (undefined1 *)0x80000000;
    if (local_68 == 0x3b9aca06) {
      FUN_0069263c((uint)local_70 & 0xff,local_6c);
    }
LAB_0129131c:
    FUN_01446188(&local_78);
    if (local_78 == (undefined *)0x80000000) {
      if (((uint)local_74 & 0xff) < 4) {
        FUN_0069263c((uint)local_74 & 0xff,local_70);
      }
    }
    else {
      local_90 = local_78;
      local_8c = local_74;
      ppuStack_88 = local_70;
      local_70 = &local_90;
      local_6c = &LAB_00632348;
      local_74 = &LAB_018a13b8;
      local_78 = &DAT_01c26458;
      FUN_00664898(&local_138,&DAT_005b25a2,&local_78);
      FUN_019a6164(&local_84,local_134,local_130);
      FUN_0134bd64(local_138,local_134);
      if (local_84 == -0x80000000) {
        FUN_0069263c(local_80 & 0xff,local_7c);
        puVar1 = (undefined1 *)0x80000000;
      }
      else {
        FUN_012847a4(&local_78,local_80,local_7c);
        puVar1 = local_74;
        if (local_78 == (undefined *)0x0) {
          FUN_01bed4e2(&local_138,&local_70,0x50);
        }
        else {
          puVar1 = (undefined1 *)0x80000000;
          if (local_68 == 0x3b9aca06) {
            FUN_0069263c((uint)local_70 & 0xff,local_6c);
          }
        }
        FUN_0134bd64(local_84,local_80);
      }
      FUN_0134bd64(local_90,local_8c);
      if (puVar1 != (undefined1 *)0x80000000) goto LAB_01291488;
    }
    FUN_01288f84(param_1);
  }
  else {
    FUN_01bed4e2(local_e8,(uint)&local_78 | 4,0x54);
    puVar1 = local_e8[0];
    if (local_e8[0] == (undefined1 *)0x80000000) goto LAB_0129131c;
    FUN_01bed4e2(&local_138,(uint)local_e8 | 4,0x50);
LAB_01291488:
    *param_1 = puVar1;
    FUN_01bed4e2(param_1 + 1,&local_138,0x50);
  }
  return;
}

