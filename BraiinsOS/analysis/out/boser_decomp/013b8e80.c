// FUN_013b8e80 @ 013b8e80 size=672 calls_out=10 calls_in=2
// strings: invalid key

void FUN_013b8e80(undefined1 *param_1,int *param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined8 uVar6;
  char local_170;
  undefined1 local_16f;
  undefined1 auStack_16c [20];
  uint local_158;
  undefined1 local_154;
  undefined1 auStack_150 [128];
  undefined1 auStack_d0 [24];
  undefined4 local_b8;
  uint local_b4;
  undefined1 local_b0;
  undefined4 local_30;
  
  FUN_01933ff0(&local_b8,*param_2 + 8);
  if (local_b8 == 1) {
    local_154 = local_b0;
    local_158 = local_b4;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_158,&DAT_01cf144c,&DAT_01cf0e3c);
  }
  iVar2 = FUN_0139f148(*(undefined4 *)(local_b4 + 0x18c),*(undefined4 *)(local_b4 + 400),param_2[1],
                       param_2[2]);
  FUN_013ab758(&local_158,(int *)(iVar2 + 0xac),local_b4 + 0x9c);
  if ((local_158 & 7) == 4) {
    FUN_01bed4e2((uint)auStack_d0 | 3,auStack_150,0x10);
    FUN_01bed4e2((uint)&local_170 | 1,auStack_d0,0x13);
    FUN_00a97e8c(local_b4,local_b0);
    FUN_01bed4e2((uint)&local_b8 | 3,auStack_16c,0x10);
    *param_1 = 5;
    FUN_01bed4e2(param_1 + 1,&local_b8,0x13);
    return;
  }
  if (local_158 == 6) {
    FUN_013b695c(&local_b8,iVar2 + 0x20);
    if ((char)local_b8 != '\x03') {
      FUN_01bed4e2((uint)&local_170 | 2,(uint)&local_b8 | 2,0x16);
      local_16f = local_b8._1_1_;
      local_170 = (char)local_b8;
      FUN_00a97e8c(local_b4,local_b0);
      FUN_013b8db0(param_1,&local_170);
      return;
    }
    if (((ushort)local_b8 & 0x100) != 0) {
      uVar6 = (**(code **)*param_3)(param_3[1]);
      if (*(int *)(iVar2 + 0x50) != 0) {
        (**(code **)(*(int *)(iVar2 + 0x50) + 0xc))(*(undefined4 *)(iVar2 + 0x54));
      }
      *(undefined8 *)(iVar2 + 0x50) = uVar6;
      FUN_00a97e8c(local_b4,local_b0);
      uVar1 = 7;
      goto LAB_013b90c4;
    }
  }
  else {
    FUN_01bed4e2(&local_b8,&local_158,0x88);
    local_30 = 0;
    uVar3 = FUN_013ba718(local_b4 + 0x9c,&local_b8);
    if (*(int *)(iVar2 + 0xac) == 1) {
      if ((*(uint *)(local_b4 + 0xa4) <= uVar3) ||
         (piVar4 = (int *)(*(int *)(local_b4 + 0xa0) + uVar3 * 0x90), *piVar4 == 6 && piVar4[1] == 0
         )) {
                    /* WARNING: Subroutine does not return */
        FUN_01979f74("invalid key",0xb,&DAT_01d1d004);
      }
      iVar5 = *(int *)(iVar2 + 0xb0);
      piVar4[0x22] = 1;
      piVar4[0x23] = iVar5;
      *(uint *)(iVar2 + 0xb0) = uVar3;
    }
    else {
      *(uint *)(iVar2 + 0xb0) = uVar3;
      *(undefined4 *)(iVar2 + 0xac) = 1;
      *(uint *)(iVar2 + 0xb4) = uVar3;
    }
    iVar5 = *(int *)(iVar2 + 0x50);
    *(undefined4 *)(iVar2 + 0x50) = 0;
    if (iVar5 != 0) {
      (**(code **)(iVar5 + 4))(*(undefined4 *)(iVar2 + 0x54));
    }
  }
  FUN_00a97e8c(local_b4,local_b0);
  uVar1 = 6;
LAB_013b90c4:
  *param_1 = uVar1;
  return;
}

