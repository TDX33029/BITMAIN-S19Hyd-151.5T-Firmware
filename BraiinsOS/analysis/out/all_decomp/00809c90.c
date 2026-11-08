// FUN_00809c90 @ 00809c90 size=576 calls_out=4 calls_in=0
// strings: 

undefined4 FUN_00809c90(double *param_1,undefined4 *param_2)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  double dVar6;
  undefined4 local_44;
  int local_40;
  undefined1 *local_3c;
  undefined1 local_35;
  undefined4 *local_34;
  undefined *local_30;
  uint local_2c;
  uint local_28;
  
  uVar4 = *param_2;
  iVar5 = param_2[1];
  pcVar2 = *(code **)(iVar5 + 0xc);
  iVar1 = (*pcVar2)(uVar4,&DAT_0035b90f,7);
  if (iVar1 == 0) {
    uVar3 = param_2[2];
    if ((uVar3 & 0x800000) == 0) {
      iVar1 = (*pcVar2)(uVar4,"(",1);
      if (iVar1 != 0) {
        return 1;
      }
      if ((uVar3 & 0x10000000) == 0) {
        dVar6 = ABS(*param_1);
        if ((1e+16 <= dVar6) || (*param_1 != 0.0 && dVar6 < 0.0001)) {
          iVar1 = FUN_00fb1b5c(param_2,(uVar3 & 0x3fffff) >> 0x15);
        }
        else {
          iVar1 = FUN_00fb1850(param_2,(uVar3 & 0x3fffff) >> 0x15,1);
        }
      }
      else {
        iVar1 = FUN_00fb1470(param_2,(uVar3 & 0x3fffff) >> 0x15,*(undefined2 *)((int)param_2 + 0xe))
        ;
      }
    }
    else {
      iVar1 = (*pcVar2)(uVar4,"(\n",2);
      if (iVar1 != 0) {
        return 1;
      }
      local_3c = &local_35;
      local_35 = 1;
      local_2c = param_2[2];
      local_28 = param_2[3];
      local_30 = &DAT_01880dc4;
      local_34 = &local_44;
      local_44 = uVar4;
      local_40 = iVar5;
      if ((local_2c & 0x10000000) == 0) {
        dVar6 = ABS(*param_1);
        if ((1e+16 <= dVar6) || (*param_1 != 0.0 && dVar6 < 0.0001)) {
          iVar1 = FUN_00fb1b5c(&local_34,(local_2c & 0x3fffff) >> 0x15);
        }
        else {
          iVar1 = FUN_00fb1850(&local_34,(local_2c & 0x3fffff) >> 0x15,1);
        }
      }
      else {
        iVar1 = FUN_00fb1470(&local_34,(local_2c & 0x3fffff) >> 0x15,local_28 >> 0x10);
      }
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
    }
    if (iVar1 == 0) {
      uVar4 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418e07,1);
      return uVar4;
    }
  }
  return 1;
}

