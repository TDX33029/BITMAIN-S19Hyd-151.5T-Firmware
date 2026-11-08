// FUN_015fe7bc @ 015fe7bc size=164 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_015fe7bc(char *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *local_24;
  code *local_20;
  char *local_1c;
  code *local_18;
  char local_11;
  
  uVar4 = *param_2;
  uVar3 = param_2[1];
  local_1c = param_1 + 1;
  local_18 = FUN_012fcc70;
  local_20 = FUN_012fcc70;
  local_24 = param_1;
  iVar1 = FUN_012fa178(uVar4,uVar3,&DAT_004ba57b,&local_24);
  uVar2 = 1;
  if (iVar1 == 0) {
    local_11 = param_1[2];
    if (local_11 == '\0') {
      uVar2 = 0;
    }
    else {
      local_24 = &local_11;
      local_20 = (code *)&LAB_015fead4;
      uVar2 = FUN_012fa178(uVar4,uVar3,&DAT_005a8e5e,&local_24);
    }
  }
  return uVar2;
}

