// FUN_0185ec60 @ 0185ec60 size=324 calls_out=5 calls_in=1
// strings: 

void FUN_0185ec60(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined1 local_38;
  undefined1 local_31;
  int local_30;
  int local_2c;
  uint local_28;
  int *local_24;
  undefined1 *local_20;
  int local_1c;
  
  FUN_01933ff0(&local_30,*param_1 + 8);
  iVar1 = local_2c;
  if (local_30 == 1) {
    local_38 = (undefined1)local_28;
    local_3c = local_2c;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_3c,&DAT_01d2072c,&DAT_01d2c758);
  }
  local_44 = param_1[1];
  local_40 = param_1[2];
  local_48 = local_2c + 0x158;
  uVar4 = local_28 & 0xff;
  FUN_01656cb0(&local_30,param_1[3] + 8);
  iVar2 = local_2c;
  if (local_30 == 1) {
    local_38 = (undefined1)local_28;
    local_3c = local_2c;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_3c,&DAT_01d2073c,&DAT_01d2c768);
  }
  local_31 = 0;
  local_1c = local_2c + 8;
  local_20 = &local_31;
  local_24 = &local_3c;
  uVar3 = local_28 & 0xff;
  local_2c = iVar1 + 0xe8;
  local_30 = iVar1 + 0x38;
  local_3c = param_2;
  local_28 = iVar1 + 0xe0;
  FUN_018764d8(iVar1 + 8,&local_48,&local_30);
  FUN_00a97e8c(iVar2,uVar3);
  FUN_00a97e8c(iVar1,uVar4);
  return;
}

