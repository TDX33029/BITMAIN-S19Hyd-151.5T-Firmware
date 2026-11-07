// FUN_00da977c @ 00da977c size=164 calls_out=5 calls_in=1
// strings: 

void FUN_00da977c(undefined4 param_1,int param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_28 [4];
  undefined4 local_18;
  undefined4 local_14;
  
  local_28[0] = thunk_FUN_01be5118(0x80);
  if (local_28[0] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0x80);
  }
  pcVar1 = "f";
  local_28[3] = 1;
  uVar2 = 5;
  local_28[2] = 0x80;
  uVar3 = 0;
  local_28[1] = 0;
  if (param_2 != 0) {
    uVar2 = 4;
    pcVar1 = "true\x1e\x05";
  }
  FUN_00a5208c(&local_18,local_28,pcVar1,uVar2);
  if ((char)local_18 != '\x04') {
    uVar3 = FUN_01966f50(local_18,local_14);
  }
  FUN_00710a2c(param_1,local_28,uVar3);
  return;
}

