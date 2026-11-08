// FUN_0188cf44 @ 0188cf44 size=252 calls_out=4 calls_in=1
// strings: 

void FUN_0188cf44(undefined1 *param_1,int *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 uVar3;
  uint uVar4;
  byte local_34;
  undefined1 local_33;
  undefined4 local_30;
  int local_2c;
  int local_28;
  uint local_24;
  int local_20;
  undefined1 local_1c;
  
  FUN_01933ff0(&local_2c,*param_2 + 8);
  iVar2 = local_28;
  if (local_2c == 1) {
    local_1c = (undefined1)local_24;
    local_20 = local_28;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_20,&DAT_01d2072c,&DAT_01d2c778);
  }
  uVar4 = local_24 & 0xff;
  local_2c = local_28 + 0x158;
  puVar1 = (undefined4 *)(local_28 + 0x144);
  local_24 = param_2[2];
  local_28 = param_2[1];
  FUN_01387d88(&local_34,*puVar1,param_3,&local_2c);
  FUN_00a97e8c(iVar2,uVar4);
  if (local_34 == 2) {
    uVar3 = 6;
  }
  else if (local_34 == 3) {
    uVar3 = 7;
  }
  else if ((local_34 & 1) == 0) {
    *(undefined4 *)(param_1 + 4) = local_30;
    uVar3 = 5;
  }
  else {
    param_1[1] = local_33;
    uVar3 = 3;
  }
  *param_1 = uVar3;
  return;
}

