// FUN_0164dd24 @ 0164dd24 size=444 calls_out=10 calls_in=2
// strings: core missing | A Tokio 1.x context was found; but IO is disabled. Call `enable_io` on the runtime builder to enable IO.

void FUN_0164dd24(int param_1,undefined4 param_2,int param_3,int *param_4,undefined1 *param_5)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 4) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb715c(&DAT_018acbe0);
  }
  iVar3 = *(int *)(param_1 + 8);
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    FUN_0164c578(iVar3);
    thunk_FUN_016d3fb4(iVar3);
    iVar3 = *(int *)(param_1 + 4) + 1;
  }
  *(int *)(param_1 + 4) = iVar3;
  *(undefined4 *)(param_1 + 8) = param_2;
  if (param_5 == &DAT_3b9aca00) {
    piVar2 = param_4 + 1;
    if (*param_4 == 0) {
      FUN_0165b5bc();
    }
    else if (*piVar2 == -0x80000000) {
      FUN_01639cac(param_4[2] + 8);
    }
    else {
      if (*(int *)(param_3 + 0x130) == -1) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
                     ,0x68,&DAT_018ad354);
      }
      FUN_0165af70(piVar2,(int *)(param_3 + 0x130),&DAT_3b9aca00,*param_4,&DAT_3b9aca00);
      FUN_0163edcc(piVar2);
      FUN_01644d00(param_4 + 8);
    }
  }
  else {
    FUN_016476c4(param_4,param_3 + 0x100,param_5);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    do {
      *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
      if (*(int *)(param_1 + 0x18) == 0) {
        *(undefined4 *)(param_1 + 0xc) = 0;
        if (*(int *)(param_1 + 4) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb715c(&DAT_018acbd0);
        }
        iVar3 = *(int *)(param_1 + 8);
        *(undefined4 *)(param_1 + 4) = 0xffffffff;
        *(undefined4 *)(param_1 + 8) = 0;
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8("core missing",0xc,&DAT_018acbc0);
        }
        *(undefined4 *)(param_1 + 4) = 0;
        return;
      }
      iVar3 = *(int *)(param_1 + 0x18) + -1;
      *(int *)(param_1 + 0x18) = iVar3;
      piVar2 = (int *)(*(int *)(param_1 + 0x14) + iVar3 * 8);
      (**(code **)(*piVar2 + 4))(piVar2[1]);
      uVar1 = *(uint *)(param_1 + 0xc);
      *(uint *)(param_1 + 0xc) = uVar1 + 1;
    } while (0xfffffffe < uVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fb715c(&DAT_018ad0cc);
}

