// FUN_0137ca40 @ 0137ca40 size=528 calls_out=9 calls_in=2
// strings: 

void FUN_0137ca40(undefined1 *param_1,int *param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  char local_f0;
  undefined1 local_ef;
  undefined1 auStack_ec [20];
  uint local_d8;
  int local_d4;
  undefined1 local_d0 [128];
  undefined1 auStack_50 [20];
  undefined4 local_3c;
  undefined1 local_38;
  
  FUN_01933ff0(&local_d8,*param_2 + 8);
  if (local_d8 == 1) {
    local_38 = local_d0[0];
    local_3c = local_d4;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_3c,&DAT_01ceafc4,&DAT_01cea91c);
  }
  iVar2 = FUN_01367cb8(*(undefined4 *)(local_d4 + 0x18c),*(undefined4 *)(local_d4 + 400),param_2[1],
                       param_2[2]);
  FUN_0138b198(&local_d8,iVar2 + 0xb4,local_d4 + 0x9c);
  if ((local_d8 & 7) == 4) {
    FUN_01bed4e2((uint)auStack_50 | 3,local_d0,0x10);
    FUN_01bed4e2((uint)&local_f0 | 1,auStack_50,0x13);
    FUN_00a97e8c(local_d4,local_d0[0]);
    FUN_01bed4e2((uint)&local_d8 | 3,auStack_ec,0x10);
    *param_1 = 5;
    FUN_01bed4e2(param_1 + 1,&local_d8,0x13);
    return;
  }
  if (local_d8 == 6) {
    FUN_0137b91c(&local_3c,iVar2 + 0x20);
    if ((char)local_3c != '\x03') {
      FUN_01bed4e2((uint)&local_f0 | 2,(uint)&local_3c | 2,0x16);
      local_ef = local_3c._1_1_;
      local_f0 = (char)local_3c;
      FUN_00a97e8c(local_d4,local_d0[0]);
      FUN_013b8db0(param_1,&local_f0);
      return;
    }
    if (((ushort)local_3c & 0x100) != 0) {
      uVar4 = (**(code **)*param_3)(param_3[1]);
      if (*(int *)(iVar2 + 0x50) != 0) {
        (**(code **)(*(int *)(iVar2 + 0x50) + 0xc))(*(undefined4 *)(iVar2 + 0x54));
      }
      *(undefined8 *)(iVar2 + 0x50) = uVar4;
      FUN_00a97e8c(local_d4,local_d0[0]);
      uVar1 = 7;
      goto LAB_0137cbd4;
    }
  }
  else {
    FUN_0138b0e0(iVar2 + 0xb4,local_d4 + 0x9c,&local_d8);
    iVar3 = *(int *)(iVar2 + 0x50);
    *(undefined4 *)(iVar2 + 0x50) = 0;
    if (iVar3 != 0) {
      (**(code **)(iVar3 + 4))(*(undefined4 *)(iVar2 + 0x54));
    }
  }
  FUN_00a97e8c(local_d4,local_d0[0]);
  uVar1 = 6;
LAB_0137cbd4:
  *param_1 = uVar1;
  return;
}

