// FUN_0155c220 @ 0155c220 size=184 calls_out=2 calls_in=0
// strings: Boolean | Array

void FUN_0155c220(int *param_1,undefined4 *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  code *pcVar6;
  undefined4 *local_14;
  undefined4 *local_10;
  undefined1 local_c;
  undefined1 local_b;
  
  uVar2 = 1;
  if ((int)*(uint *)(*param_1 + 8) < 0) {
    uVar2 = *(uint *)(*param_1 + 8) ^ 0x80000000;
  }
  if (uVar2 == 0) {
    uVar3 = *param_2;
    uVar5 = 7;
    pcVar6 = *(code **)(param_2[1] + 0xc);
    pcVar4 = "Boolean";
  }
  else {
    if (uVar2 == 1) {
      local_c = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_004a6847,7);
      local_b = 0;
      local_14 = (undefined4 *)0x0;
      local_10 = param_2;
      FUN_01302aa0(&local_14);
      return;
    }
    uVar3 = *param_2;
    uVar5 = 5;
    pcVar6 = *(code **)(param_2[1] + 0xc);
    pcVar4 = "Array";
  }
  bVar1 = (*pcVar6)(uVar3,pcVar4,uVar5);
  local_10._0_2_ = (ushort)bVar1;
  local_14 = param_2;
  FUN_01302e1c(&local_14);
  return;
}

