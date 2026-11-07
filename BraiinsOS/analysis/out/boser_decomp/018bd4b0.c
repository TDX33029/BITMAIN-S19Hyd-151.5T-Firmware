// FUN_018bd4b0 @ 018bd4b0 size=656 calls_out=11 calls_in=1
// strings: internal error: entered unreachable code

void FUN_018bd4b0(uint *param_1,int param_2,int param_3,uint param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 auStack_200 [224];
  int local_120;
  int local_11c;
  int local_118;
  int local_114;
  int local_110;
  undefined4 local_10c;
  int local_108;
  undefined1 auStack_104 [223];
  undefined1 uStack_25;
  
  FUN_01890ee8(&local_108,param_5,param_2,param_3,&uStack_25,&LAB_018bd0b8);
  param_4 = param_4 & 0xffff;
  if (local_108 != 0) {
    FUN_01bed4e2(auStack_200,auStack_104,0xdc);
    iVar3 = local_108;
LAB_018bd518:
    puVar1 = (undefined4 *)thunk_FUN_01be5118(0xe8);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0xe8);
    }
    *puVar1 = 1;
    puVar1[1] = 1;
    puVar1[2] = iVar3;
    FUN_01bed4e2(puVar1 + 3,auStack_200,0xdc);
    *param_1 = param_4;
    param_1[1] = (uint)puVar1;
    return;
  }
  if (param_4 == 3) {
    piVar5 = (int *)&UNK_01d23c38;
  }
  else {
    if (param_4 != 5) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d22774);
    }
    piVar5 = &DAT_01d23c40;
  }
  iVar3 = param_3 + 8;
  uVar2 = 0;
  if (-1 < iVar3) {
    uVar2 = 1;
    local_11c = FUN_01298504(iVar3,1);
    if (local_11c != 0) {
      local_118 = 0;
      local_120 = iVar3;
      FUN_01ac6d2c(&local_120,param_2,param_2 + param_3);
      FUN_018e1c64(&local_120);
      uVar2 = 0;
      FUN_018a79f4(&local_120,0,4,&DAT_01d22764);
      iVar3 = local_118;
      iVar4 = piVar5[1];
      local_114 = iVar4 + local_118 + 4;
      if (local_114 < 0) {
LAB_018bd604:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar2,local_114);
      }
      if (local_114 == 0) {
        local_110 = 1;
        local_114 = 0;
      }
      else {
        uVar2 = 1;
        local_110 = FUN_01298504(local_114,1);
        if (local_110 == 0) goto LAB_018bd604;
      }
      local_10c = 0;
      FUN_01ac6d2c(&local_114,*piVar5,*piVar5 + iVar4);
      iVar4 = local_11c;
      FUN_01ac6d2c(&local_114,local_11c,local_11c + iVar3);
      FUN_018e1c64(&local_114);
      FUN_018a79f4(&local_114,0,0x30,&DAT_01d23290);
      iVar3 = local_110;
      FUN_01890ee8(&local_108,param_5,local_110,local_10c,&uStack_25,&LAB_018bd0b8);
      if (local_108 == 0) {
        FUN_0134bd64(local_114,iVar3);
        FUN_0134bd64(local_120,iVar4);
        *(undefined2 *)param_1 = 0xe;
        return;
      }
      FUN_01bed4e2(auStack_200,auStack_104,0xdc);
      FUN_0134bd64(local_114,iVar3);
      FUN_0134bd64(local_120,iVar4);
      iVar3 = local_108;
      goto LAB_018bd518;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00664620(uVar2,iVar3);
}

