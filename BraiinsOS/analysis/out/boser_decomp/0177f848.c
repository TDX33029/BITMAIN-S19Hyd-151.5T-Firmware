// FUN_0177f848 @ 0177f848 size=124 calls_out=1 calls_in=3
// strings: 

void FUN_0177f848(uint *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined1 uVar1;
  uint local_20;
  uint local_1c;
  
  do {
    if (*(int *)(param_3 + 0x74) == 0) {
      uVar1 = 4;
LAB_0177f8b8:
      *(undefined1 *)param_1 = uVar1;
      return;
    }
    FUN_0177f8c4(&local_20,param_2,param_3,param_4);
    if ((char)local_20 == '\x05') {
      uVar1 = 5;
      goto LAB_0177f8b8;
    }
    if ((local_20 & 0xff) != 4) {
      *param_1 = local_20;
      param_1[1] = local_1c;
      return;
    }
  } while( true );
}

