// FUN_016c1afc @ 016c1afc size=84 calls_out=1 calls_in=3
// strings: 

void FUN_016c1afc(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 4);
  do {
    if (param_2 == 0) {
      return;
    }
    if (puVar2[-1] - 6 < 2) {
      uVar1 = 4;
LAB_016c1b34:
      FUN_0134aee0(*puVar2,puVar2[1],4,uVar1);
    }
    else {
      uVar1 = 8;
      if (puVar2[-1] == 2) goto LAB_016c1b34;
    }
    param_2 = param_2 + -1;
    puVar2 = puVar2 + 4;
  } while( true );
}

