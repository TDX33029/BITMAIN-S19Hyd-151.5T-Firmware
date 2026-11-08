// FUN_0095e17c @ 0095e17c size=492 calls_out=4 calls_in=2
// strings: 

void FUN_0095e17c(undefined4 param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 auStack_1f8 [376];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined1 local_2c;
  undefined1 local_2b;
  
  iVar4 = *(int *)(param_2 + 0xf8);
  if (iVar4 == -0x80000000) {
    iVar4 = thunk_FUN_01be5118(0x1d0);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x1d0);
    }
    uVar2 = *(undefined2 *)(param_3 + 0x1cc);
    uVar5 = *(undefined4 *)(param_3 + 0x1c8);
    local_48 = *(undefined4 *)(param_3 + 0x1b0);
    uStack_44 = *(undefined4 *)(param_3 + 0x1b4);
    uStack_40 = *(undefined4 *)(param_3 + 0x1b8);
    local_3c = *(undefined4 *)(param_3 + 0x1bc);
    uStack_38 = *(undefined4 *)(param_3 + 0x1c0);
    uStack_34 = *(undefined4 *)(param_3 + 0x1c4);
    local_80 = *(undefined4 *)(param_3 + 0x178);
    uStack_7c = *(undefined4 *)(param_3 + 0x17c);
    uStack_78 = *(undefined4 *)(param_3 + 0x180);
    uStack_74 = *(undefined4 *)(param_3 + 0x184);
    uStack_70 = *(undefined4 *)(param_3 + 0x188);
    uStack_6c = *(undefined4 *)(param_3 + 0x18c);
    local_68 = *(undefined4 *)(param_3 + 400);
    uStack_64 = *(undefined4 *)(param_3 + 0x194);
    uStack_60 = *(undefined4 *)(param_3 + 0x198);
    uStack_5c = *(undefined4 *)(param_3 + 0x19c);
    local_58 = *(undefined4 *)(param_3 + 0x1a0);
    uStack_54 = *(undefined4 *)(param_3 + 0x1a4);
    uStack_50 = *(undefined4 *)(param_3 + 0x1a8);
    uStack_4c = *(undefined4 *)(param_3 + 0x1ac);
    FUN_01bed4e2(auStack_1f8,param_3,0x178);
    FUN_01bed4e2(iVar4,auStack_1f8,0x1c8);
    *(undefined2 *)(iVar4 + 0x1cc) = uVar2;
    *(undefined4 *)(iVar4 + 0x1c8) = uVar5;
    *(undefined4 *)(param_2 + 0xf8) = 1;
    *(int *)(param_2 + 0xfc) = iVar4;
    *(undefined4 *)(param_2 + 0x100) = 1;
  }
  else {
    uVar1 = *(undefined1 *)(param_3 + 0x1cd);
    uVar2 = *(undefined2 *)(param_3 + 0x1ca);
    local_2c = *(undefined1 *)(param_3 + 0x1cc);
    uStack_30 = *(undefined2 *)(param_3 + 0x1c8);
    local_48 = *(undefined4 *)(param_3 + 0x1b0);
    uStack_44 = *(undefined4 *)(param_3 + 0x1b4);
    uStack_40 = *(undefined4 *)(param_3 + 0x1b8);
    local_3c = *(undefined4 *)(param_3 + 0x1bc);
    uStack_38 = *(undefined4 *)(param_3 + 0x1c0);
    uStack_34 = *(undefined4 *)(param_3 + 0x1c4);
    local_80 = *(undefined4 *)(param_3 + 0x178);
    uStack_7c = *(undefined4 *)(param_3 + 0x17c);
    uStack_78 = *(undefined4 *)(param_3 + 0x180);
    uStack_74 = *(undefined4 *)(param_3 + 0x184);
    uStack_70 = *(undefined4 *)(param_3 + 0x188);
    uStack_6c = *(undefined4 *)(param_3 + 0x18c);
    local_68 = *(undefined4 *)(param_3 + 400);
    uStack_64 = *(undefined4 *)(param_3 + 0x194);
    uStack_60 = *(undefined4 *)(param_3 + 0x198);
    uStack_5c = *(undefined4 *)(param_3 + 0x19c);
    local_58 = *(undefined4 *)(param_3 + 0x1a0);
    uStack_54 = *(undefined4 *)(param_3 + 0x1a4);
    uStack_50 = *(undefined4 *)(param_3 + 0x1a8);
    uStack_4c = *(undefined4 *)(param_3 + 0x1ac);
    FUN_01bed4e2(auStack_1f8,param_3,0x178);
    iVar3 = *(int *)(param_2 + 0x100);
    uStack_2e = uVar2;
    local_2b = uVar1;
    if (iVar3 == iVar4) {
      FUN_00a20ff0((int *)(param_2 + 0xf8));
    }
    FUN_01bed4e2(iVar3 * 0x1d0 + *(int *)(param_2 + 0xfc),auStack_1f8,0x1d0);
    *(int *)(param_2 + 0x100) = iVar3 + 1;
  }
  FUN_01bed4e2(param_1,param_2,0x130);
  return;
}

