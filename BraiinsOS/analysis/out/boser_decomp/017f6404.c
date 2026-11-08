// FUN_017f6404 @ 017f6404 size=324 calls_out=5 calls_in=2
// strings: 

void FUN_017f6404(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined1 local_38;
  int local_34;
  undefined4 local_30;
  undefined1 local_29;
  int *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  int *local_1c;
  
  FUN_01933ff0(&local_28,*param_1 + 8);
  puVar1 = local_24;
  if (local_28 == (int *)0x1) {
    local_38 = local_20._0_1_;
    local_3c = (int)local_24;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_3c,&DAT_01d1d434,&DAT_01d1d064);
  }
  local_44 = param_1[1];
  local_40 = param_1[2];
  local_48 = (int)local_24 + 0x158;
  uVar4 = (uint)local_20 & 0xff;
  FUN_01656cb0(&local_28,param_1[3] + 8);
  puVar2 = local_24;
  if (local_28 == (int *)0x1) {
    local_38 = local_20._0_1_;
    local_3c = (int)local_24;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_3c,&DAT_01d1d414,&DAT_01d1d074);
  }
  uVar3 = (uint)local_20 & 0xff;
  local_3c = (int)local_24 + 8;
  local_29 = 0;
  local_34 = (int)puVar1 + 0x38;
  local_1c = &local_3c;
  local_20 = &local_29;
  local_24 = &local_30;
  local_28 = &local_34;
  local_30 = param_2;
  FUN_017f13c0((int)puVar1 + 8,&local_48,&local_28);
  FUN_00a97e8c(puVar2,uVar3);
  FUN_00a97e8c(puVar1,uVar4);
  return;
}

