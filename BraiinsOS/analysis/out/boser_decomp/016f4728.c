// FUN_016f4728 @ 016f4728 size=292 calls_out=4 calls_in=2
// strings: 

void FUN_016f4728(undefined1 *param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  char local_24;
  undefined1 local_23;
  int local_20;
  undefined4 local_1c;
  
  if (param_3 == 8) {
    iVar2 = thunk_FUN_01bed842(param_2,&DAT_00570718,8);
    if (iVar2 != 0) goto LAB_016f47cc;
    uVar3 = 0x80056fd68;
  }
  else {
    if (param_3 == 5) {
      iVar2 = thunk_FUN_01bed842(param_2,&DAT_004ea233,5);
      if (iVar2 == 0) {
        uVar3 = 0x5004ea238;
        goto LAB_016f482c;
      }
    }
    else if (param_3 == 3) {
      iVar2 = thunk_FUN_01bed842(param_2,&DAT_004ea230,3);
      if (iVar2 == 0) {
        uVar3 = 0x3004ea23d;
        goto LAB_016f482c;
      }
    }
LAB_016f47cc:
    FUN_016f4508(&local_24,&DAT_00568078,0x10);
    if (local_24 == '\x01') {
      param_1[1] = local_23;
      uVar1 = 1;
      goto LAB_016f4834;
    }
    if (local_20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d16b18);
    }
    uVar3 = FUN_016f45e4(local_20,local_1c,param_2,param_3);
  }
LAB_016f482c:
  uVar1 = 0;
  *(undefined8 *)(param_1 + 4) = uVar3;
LAB_016f4834:
  *param_1 = uVar1;
  return;
}

