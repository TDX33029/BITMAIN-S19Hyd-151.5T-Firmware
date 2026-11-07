// FUN_010b3ea0 @ 010b3ea0 size=736 calls_out=2 calls_in=0
// strings: Encoder | is_last | Encoder | is_last

undefined4 FUN_010b3ea0(int param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  code *pcVar7;
  int iVar8;
  int iVar9;
  int local_4c;
  int local_48;
  undefined1 *local_44;
  undefined1 local_3d;
  int *local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  int **local_28;
  byte local_24;
  char local_23;
  
  iVar8 = *param_2;
  iVar9 = param_2[1];
  pcVar7 = *(code **)(iVar9 + 0xc);
  iVar2 = (*pcVar7)(iVar8,&DAT_00568094,4);
  if (iVar2 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (*pcVar7)(iVar8,"(",1);
      if (iVar2 != 0) {
        return 1;
      }
      local_4c = param_1 + 0x10;
      bVar1 = (*pcVar7)(iVar8,"Encoder",7);
      local_38._0_2_ = (ushort)bVar1;
      local_3c = param_2;
      uVar3 = FUN_00fb2258(&local_3c,&DAT_005691b4,4,param_1,FUN_010b41dc);
      FUN_00fb2258(uVar3,"is_last",7,&local_4c,&LAB_010b9d64);
      if (local_38._1_1_ != 1 || ((uint)local_38 & 1) != 0) {
        if (((local_38._1_1_ | (byte)local_38) & 1) != 0) {
          return 1;
        }
        goto LAB_010b4148;
      }
      if ((*(byte *)((int)local_3c + 10) & 0x80) == 0) {
        iVar2 = (**(code **)(local_3c[1] + 0xc))(*local_3c," }",2);
      }
      else {
        iVar2 = (**(code **)(local_3c[1] + 0xc))(*local_3c,"}",1);
      }
    }
    else {
      iVar2 = (*pcVar7)(iVar8,"(\n",2);
      if (iVar2 != 0) {
        return 1;
      }
      local_44 = &local_3d;
      local_34 = param_2[2];
      local_3d = 1;
      local_30 = param_2[3];
      local_3c = &local_4c;
      local_38 = &DAT_01880dc4;
      local_2c = param_1 + 0x10;
      local_4c = iVar8;
      local_48 = iVar9;
      local_24 = FUN_00fb1f64(local_3c,"Encoder",7);
      local_28 = &local_3c;
      local_23 = '\0';
      uVar3 = FUN_00fb2258(&local_28,&DAT_005691b4,4,param_1,FUN_010b41dc);
      FUN_00fb2258(uVar3,"is_last",7,&local_2c,&LAB_010b9d64);
      uVar4 = (uint)local_24;
      if (local_23 == '\x01' && uVar4 == 0) {
        if ((*(byte *)((int)local_28 + 10) & 0x80) == 0) {
          piVar5 = *local_28;
          uVar3 = 2;
          pcVar7 = (code *)local_28[1][3];
          pcVar6 = " }";
        }
        else {
          piVar5 = *local_28;
          uVar3 = 1;
          pcVar7 = (code *)local_28[1][3];
          pcVar6 = "}";
        }
        uVar4 = (*pcVar7)(piVar5,pcVar6,uVar3);
      }
      else if (local_23 != '\0') {
        return 1;
      }
      if (uVar4 != 0) {
        return 1;
      }
      iVar2 = (**(code **)(local_38 + 0xc))(local_3c,&DAT_00414a81,2);
    }
    if (iVar2 == 0) {
LAB_010b4148:
      uVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418e07,1);
      return uVar3;
    }
  }
  return 1;
}

