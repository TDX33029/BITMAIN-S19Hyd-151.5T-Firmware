// FUN_01650ba0 @ 01650ba0 size=240 calls_out=7 calls_in=8
// strings: 

void FUN_01650ba0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (*(char *)(param_1 + 0xb) == '\0') {
    return;
  }
  iVar3 = param_1[5];
  uVar2 = param_1[6];
  param_1[5] = 3;
  if (iVar3 == 3) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d06998);
  }
  uVar1 = param_1[10];
  FUN_00734dd0(&iStack_40);
  iStack_30 = iStack_40;
  uStack_2c = uStack_3c;
  uStack_28 = uStack_38;
  uStack_24 = uVar1;
  FUN_0165302c(&iStack_40,iVar3,uVar2,&iStack_30);
  if (iStack_40 == -0x80000000) {
    FUN_01651cc8(iVar3,uVar2);
    *param_1 = 1;
    FUN_01650d2c(param_1);
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_004c144d,0x8b,&DAT_01d069b8);
  }
  iStack_30 = iStack_40;
  uStack_2c = uStack_3c;
  uStack_28 = uStack_38;
  uStack_24 = uStack_34;
                    /* WARNING: Subroutine does not return */
  FUN_013073dc(&DAT_00533467,0x2b,&iStack_30,&DAT_01d069c8);
}

