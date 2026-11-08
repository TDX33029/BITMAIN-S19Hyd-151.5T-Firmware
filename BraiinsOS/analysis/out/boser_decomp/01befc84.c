// FUN_01befc84 @ 01befc84 size=424 calls_out=12 calls_in=3
// strings: 

void FUN_01befc84(code *param_1,undefined4 param_2)

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
  
  FUN_01bed93e(auStack_b8,0,0x88);
  local_bc = &LAB_01befc14_1;
  local_38 = 0x18000000;
  FUN_01bea6d4(auStack_13c);
  FUN_01bee540();
  FUN_01bea6b8(0);
  FUN_01bef8fc(1,&local_140);
  FUN_01befa3c(&DAT_01d54064,0);
  FUN_01befa3c(&DAT_01d54040,0);
  iVar1 = FUN_01befa3c(&DAT_01d54054,0);
  iVar4 = coprocessor_movefromRt(0xf,0,3,in_cr13,in_cr0);
  local_144 = param_1;
  if (DAT_01d53574 != 0) {
    software_interrupt(0);
    if (*(int *)(iVar4 + -0x60) == iVar1) {
      iVar1 = 0;
      DAT_01d5403c = param_1;
      DAT_01d54050 = param_2;
      FUN_01bed93e(auStack_b8,0xffffffff,0x80);
      FUN_01bea758(0x22,&local_bc,0);
      uVar3 = extraout_r1;
      for (iVar5 = *(int *)(iVar4 + -0x68); iVar5 != iVar4 + -0x70; iVar5 = *(int *)(iVar5 + 8)) {
        DAT_01d54074 = *(int *)(iVar5 + 0x10);
        iVar2 = DAT_01d54074;
        while( true ) {
          uVar3 = 0x22;
          software_interrupt(0);
          if (iVar2 != -0xb) break;
          iVar2 = *(int *)(iVar5 + 0x10);
        }
        if (iVar2 != 0) {
          local_144 = (code *)&DAT_01befc13;
          DAT_01d5403c = (code *)&DAT_01befc13;
          break;
        }
        iVar1 = iVar1 + 1;
        FUN_01befc0c(&DAT_01d54040);
        uVar3 = extraout_r1_00;
      }
      iVar4 = 0;
      DAT_01d54074 = 0;
      while (bVar6 = iVar4 != iVar1, iVar4 = iVar4 + 1, bVar6) {
        FUN_01befa68(&DAT_01d54064,uVar3);
        FUN_01befc0c(&DAT_01d54040);
        uVar3 = extraout_r1_01;
      }
      local_bc = (undefined1 *)0x1;
      FUN_01bea758(0x22,&local_bc,0);
      goto LAB_01befd10;
    }
  }
  iVar1 = 0;
LAB_01befd10:
  iVar4 = 0;
  (*local_144)(param_2);
  while (bVar6 = iVar4 != iVar1, iVar4 = iVar4 + 1, bVar6) {
    FUN_01befa68(&DAT_01d54054);
  }
  iVar4 = 0;
  while (bVar6 = iVar4 != iVar1, iVar4 = iVar4 + 1, bVar6) {
    FUN_01befc0c(&DAT_01d54040);
  }
  FUN_01befa38(&DAT_01d54040);
  FUN_01befa38(&DAT_01d54064);
  FUN_01befa38(&DAT_01d54054);
  FUN_01bef8fc(local_140,0);
  FUN_01bee5a4();
  FUN_01bea6f0(auStack_13c);
  return;
}

