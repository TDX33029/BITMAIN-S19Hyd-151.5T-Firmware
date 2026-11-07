// FUN_00726520 @ 00726520 size=788 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_00726520(undefined4 *param_1,short **param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  short *psVar5;
  code *pcVar6;
  short *psVar7;
  short *psVar8;
  short *local_4c;
  short *local_48;
  undefined1 *local_44;
  undefined1 local_3d;
  short **local_3c;
  undefined4 local_38;
  short *local_34;
  short *local_30;
  short *local_2c;
  short ***local_28;
  byte local_24;
  char local_23;
  
  psVar5 = (short *)*param_1;
  if (*psVar5 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00726558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(param_2[1] + 6))(*param_2,&DAT_00568af8,4);
    return uVar2;
  }
  psVar7 = *param_2;
  psVar8 = param_2[1];
  pcVar6 = *(code **)(psVar8 + 6);
  iVar3 = (*pcVar6)(psVar7,&DAT_00569804,4);
  if (iVar3 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar3 = (*pcVar6)(psVar7,"(",1);
      if (iVar3 != 0) {
        return 1;
      }
      if (*psVar5 == 1) {
        local_4c = psVar5 + 1;
        uVar1 = (*pcVar6)(psVar7,&DAT_0041481a,6);
        local_38 = (undefined *)(CONCAT31((int3)((uint)local_38 >> 8),uVar1) & 0xffff00ff);
        local_3c = param_2;
        FUN_00fb2258(&local_3c,&DAT_00414820,7,&local_4c,FUN_00723d84);
        uVar4 = (uint)local_38 & 0xff;
        if (local_38._1_1_ == '\x01' && uVar4 == 0) {
          if ((*(byte *)((int)local_3c + 10) & 0x80) == 0) {
            uVar4 = (**(code **)(local_3c[1] + 6))(*local_3c," }",2);
          }
          else {
            uVar4 = (**(code **)(local_3c[1] + 6))(*local_3c,"}",1);
          }
        }
        else if (local_38._1_1_ != '\0') {
          return 1;
        }
      }
      else {
        uVar4 = (*pcVar6)(psVar7,&DAT_00414819,1);
      }
    }
    else {
      iVar3 = (*pcVar6)(psVar7,"(\n",2);
      if (iVar3 != 0) {
        return 1;
      }
      local_44 = &local_3d;
      local_34 = param_2[2];
      local_30 = param_2[3];
      local_38 = &DAT_01880dc4;
      local_3c = &local_4c;
      local_3d = 1;
      local_4c = psVar7;
      local_48 = psVar8;
      if (*psVar5 == 1) {
        local_2c = psVar5 + 1;
        local_24 = FUN_00fb1f64(&local_4c,&DAT_0041481a,6);
        local_28 = &local_3c;
        local_23 = '\0';
        FUN_00fb2258(&local_28,&DAT_00414820,7,&local_2c,FUN_00723d84);
        uVar4 = (uint)local_24;
        if (local_23 == '\x01' && uVar4 == 0) {
          if ((*(byte *)((int)local_28 + 10) & 0x80) == 0) {
            uVar4 = (*(code *)local_28[1][3])(*local_28," }",2);
          }
          else {
            uVar4 = (*(code *)local_28[1][3])(*local_28,"}",1);
          }
        }
        else if (local_23 != '\0') {
          return 1;
        }
      }
      else {
        uVar4 = FUN_00fb1f64(&local_4c,&DAT_00414819);
      }
      if (uVar4 != 0) {
        return 1;
      }
      uVar4 = (**(code **)(local_38 + 0xc))(local_3c,&DAT_00414a81,2);
    }
    if (uVar4 == 0) {
      uVar2 = (**(code **)(param_2[1] + 6))(*param_2,&DAT_00418e07,1);
      return uVar2;
    }
  }
  return 1;
}

