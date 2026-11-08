// FUN_01aaad84 @ 01aaad84 size=276 calls_out=3 calls_in=0
// strings: 

void FUN_01aaad84(undefined4 param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 local_3c;
  undefined4 *local_38;
  undefined1 local_34;
  undefined1 local_33;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined1 local_21;
  
  uVar4 = *param_2;
  pcVar3 = *(code **)(param_2[1] + 0xc);
  iVar2 = (*pcVar3)(uVar4,&DAT_005312e4,0x15);
  uVar1 = 1;
  local_33 = 0;
  local_38 = param_2;
  if (iVar2 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (*pcVar3)(uVar4,"(",1);
      if (iVar2 == 0) {
        uVar1 = FUN_012fb170(&DAT_005312f9,0x36,*param_2,param_2[1]);
      }
    }
    else {
      iVar2 = (*pcVar3)(uVar4,"(\n",2);
      uVar1 = 1;
      if (iVar2 == 0) {
        local_30 = *param_2;
        local_28 = &local_21;
        local_2c = param_2[1];
        local_21 = 1;
        iVar2 = FUN_012fb170(&DAT_005312f9,0x36,&local_30,&DAT_01ce45f8);
        if (iVar2 == 0) {
          uVar1 = FUN_01302620(&local_30,&DAT_005312e2,2);
        }
      }
    }
  }
  local_3c = 1;
  local_34 = uVar1;
  FUN_01302aa0(&local_3c);
  return;
}

