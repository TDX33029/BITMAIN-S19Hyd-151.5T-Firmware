// FUN_012c3a60 @ 012c3a60 size=152 calls_out=2 calls_in=13
// strings: 

undefined4 FUN_012c3a60(int param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char local_2c;
  char local_2b;
  char local_2a;
  undefined4 local_28;
  undefined4 local_24 [3];
  
  while( true ) {
    FUN_012c3af8(&local_2c,param_1);
    if (local_2c != '\0') {
      return local_28;
    }
    if (local_2b != '\x01') break;
    if (local_2a != *param_2) {
      uVar1 = *(undefined4 *)(param_1 + 0x30);
      uVar2 = *(undefined4 *)(param_1 + 0x34);
      local_24[0] = 9;
      goto LAB_012c3ae0;
    }
    param_2 = param_2 + 1;
    param_3 = param_3 + -1;
    if (param_3 == 0) {
      return 0;
    }
  }
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  uVar2 = *(undefined4 *)(param_1 + 0x34);
  local_24[0] = 5;
LAB_012c3ae0:
  uVar1 = FUN_01966fbc(local_24,uVar1,uVar2);
  return uVar1;
}

