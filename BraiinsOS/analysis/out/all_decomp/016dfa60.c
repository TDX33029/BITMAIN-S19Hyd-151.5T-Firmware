// FUN_016dfa60 @ 016dfa60 size=424 calls_out=12 calls_in=2
// strings: 

void FUN_016dfa60(code *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar3;
  undefined4 extraout_r1_01;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined4 in_cr0;
  undefined4 in_cr13;
  code *local_144;
  undefined4 local_140;
  undefined1 auStack_13c [128];
  undefined1 *local_bc;
  undefined1 auStack_b8 [128];
  undefined4 local_38;
  
  FUN_016dd606(auStack_b8,0,0x88);
  local_bc = &LAB_016df9f0_1;
  local_38 = 0x18000000;
  FUN_016da498(auStack_13c);
  FUN_016de2d4();
  FUN_016da47c(0);
  FUN_016df690(1,&local_140);
  FUN_016df818(&DAT_018de5fc,0);
  FUN_016df818(&DAT_018de5d8,0);
  iVar1 = FUN_016df818(&DAT_018de5ec,0);
  iVar4 = coprocessor_movefromRt(0xf,0,3,in_cr13,in_cr0);
  local_144 = param_1;
  if (DAT_018ddb0c != 0) {
    software_interrupt(0);
    if (*(int *)(iVar4 + -0x60) == iVar1) {
      iVar1 = 0;
      DAT_018de5d4 = param_1;
      DAT_018de5e8 = param_2;
      FUN_016dd606(auStack_b8,0xffffffff,0x80);
      FUN_016da51c(0x22,&local_bc,0);
      uVar3 = extraout_r1;
      for (iVar5 = *(int *)(iVar4 + -0x68); iVar5 != iVar4 + -0x70; iVar5 = *(int *)(iVar5 + 8)) {
        DAT_018de60c = *(int *)(iVar5 + 0x10);
        iVar2 = DAT_018de60c;
        while( true ) {
          uVar3 = 0x22;
          software_interrupt(0);
          if (iVar2 != -0xb) break;
          iVar2 = *(int *)(iVar5 + 0x10);
        }
        if (iVar2 != 0) {
          local_144 = (code *)&DAT_016df9ef;
          DAT_018de5d4 = (code *)&DAT_016df9ef;
          break;
        }
        iVar1 = iVar1 + 1;
        FUN_016df9e8(&DAT_018de5d8);
        uVar3 = extraout_r1_00;
      }
      iVar4 = 0;
      DAT_018de60c = 0;
      while (bVar6 = iVar4 != iVar1, iVar4 = iVar4 + 1, bVar6) {
        FUN_016df844(&DAT_018de5fc,uVar3);
        FUN_016df9e8(&DAT_018de5d8);
        uVar3 = extraout_r1_01;
      }
      local_bc = (undefined1 *)0x1;
      FUN_016da51c(0x22,&local_bc,0);
      goto LAB_016dfaec;
    }
  }
  iVar1 = 0;
LAB_016dfaec:
  iVar4 = 0;
  (*local_144)(param_2);
  while (bVar6 = iVar4 != iVar1, iVar4 = iVar4 + 1, bVar6) {
    FUN_016df844(&DAT_018de5ec);
  }
  iVar4 = 0;
  while (bVar6 = iVar4 != iVar1, iVar4 = iVar4 + 1, bVar6) {
    FUN_016df9e8(&DAT_018de5d8);
  }
  FUN_016df814(&DAT_018de5d8);
  FUN_016df814(&DAT_018de5fc);
  FUN_016df814(&DAT_018de5ec);
  FUN_016df690(local_140,0);
  FUN_016de338();
  FUN_016da4b4(auStack_13c);
  return;
}

