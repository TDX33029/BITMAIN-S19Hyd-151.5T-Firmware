// FUN_01550144 @ 01550144 size=272 calls_out=4 calls_in=1
// strings: 

void FUN_01550144(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint local_f8;
  undefined4 local_a8;
  undefined8 local_a4;
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int local_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  uint local_50;
  undefined8 local_38;
  undefined8 local_30;
  
  if (*param_2 == -0x7ffffff6) {
    iVar1 = param_2[2];
    iVar2 = param_2[3];
    iVar3 = param_2[4];
    iVar4 = param_2[5];
    *param_1 = param_2[1];
    param_1[1] = iVar1;
    param_1[2] = iVar2;
    param_1[3] = iVar3;
    param_1[4] = iVar4;
  }
  else {
    local_f8 = local_f8 & 0xffffff00;
    uVar5 = FUN_015321a0();
    uVar6 = FUN_015321a0();
    local_a4 = FUN_015321a0();
    local_50 = local_f8;
    local_88 = *param_2;
    iStack_84 = param_2[1];
    iStack_80 = param_2[2];
    iStack_7c = param_2[3];
    local_78 = param_2[4];
    iStack_74 = param_2[5];
    iStack_70 = param_2[6];
    iStack_6c = param_2[7];
    iStack_68 = param_2[8];
    local_64 = param_2[9];
    iStack_60 = param_2[10];
    iStack_5c = param_2[0xb];
    iStack_58 = param_2[0xc];
    iStack_54 = param_2[0xd];
    local_a8 = 1;
    local_38 = uVar5;
    local_30 = uVar6;
    iVar1 = thunk_FUN_01be5118(0x80);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x80);
    }
    FUN_01bed4e2(iVar1,&local_a8,0x80);
    *param_1 = iVar1;
    *(undefined1 *)(param_1 + 4) = 6;
  }
  return;
}

