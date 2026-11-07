// FUN_0124aad0 @ 0124aad0 size=252 calls_out=3 calls_in=0
// strings: 

void FUN_0124aad0(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *local_110;
  int *local_10c;
  undefined4 local_108;
  int *local_104;
  undefined1 auStack_100 [48];
  int local_d0;
  undefined1 local_cc;
  undefined1 auStack_cb [43];
  int local_a0 [28];
  undefined1 local_30;
  
  local_110 = *(int **)(param_2 + 0x10);
  local_108 = *(undefined4 *)(param_2 + 0xc);
  local_104 = local_110 + *(int *)(param_2 + 0x14) * 0x1c;
  iVar2 = *(int *)(param_2 + 0x14) * 0x70;
  piVar1 = local_110;
  local_10c = local_110;
  do {
    if (iVar2 == 0) {
LAB_0124ab74:
      *param_1 = 2;
      local_10c = piVar1;
LAB_0124abbc:
      FUN_01a53260(&local_110);
      return;
    }
    iVar3 = *piVar1;
    if (iVar3 == 4) {
      piVar1 = piVar1 + 0x1c;
      goto LAB_0124ab74;
    }
    FUN_01bed4e2((uint)local_a0 | 4,piVar1 + 1,0x6c);
    local_30 = 0;
    local_a0[0] = iVar3;
    FUN_012334f0(&local_d0,local_a0);
    if (local_d0 != 2) {
      FUN_01bed4e2(auStack_100,auStack_cb,0x2b);
      *(undefined1 *)(param_1 + 1) = local_cc;
      *param_1 = local_d0;
      local_10c = piVar1 + 0x1c;
      FUN_01bed4e2((int)param_1 + 5,auStack_100,0x2b);
      goto LAB_0124abbc;
    }
    iVar2 = iVar2 + -0x70;
    piVar1 = piVar1 + 0x1c;
  } while( true );
}

