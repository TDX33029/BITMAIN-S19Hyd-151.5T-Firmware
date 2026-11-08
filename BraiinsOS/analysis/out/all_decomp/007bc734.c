// FUN_007bc734 @ 007bc734 size=448 calls_out=3 calls_in=1
// strings: 

void FUN_007bc734(short *param_1,int *param_2)

{
  int *unaff_r4;
  int iVar1;
  int *unaff_r6;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined1 auStack_200 [236];
  int local_114 [60];
  
  piVar4 = param_2 + 0xd;
  if (*param_2 == 1) {
    piVar3 = param_2 + 1;
    if (*piVar3 != 0) {
      iVar1 = param_2[2];
      iVar2 = param_2[4];
      if (iVar1 != iVar2) {
        unaff_r6 = local_114;
        do {
          FUN_016dd1aa(auStack_200,iVar1,0xe8);
          iVar1 = iVar1 + 0xe8;
          param_2[2] = iVar1;
          FUN_00728988(unaff_r6,piVar4,auStack_200);
          if ((short)local_114[0] != 2) goto LAB_007bc8c0;
        } while (iVar1 != iVar2);
      }
      FUN_007bbe60(piVar3);
      *piVar3 = 0;
      unaff_r4 = piVar3;
    }
    if (param_2[5] != 0) {
      unaff_r4 = (int *)param_2[6];
      piVar3 = (int *)param_2[8];
      if (unaff_r4 != piVar3) {
        unaff_r6 = local_114;
        do {
          FUN_016dd1aa(auStack_200,unaff_r4,0xe8);
          unaff_r4 = unaff_r4 + 0x3a;
          param_2[6] = (int)unaff_r4;
          FUN_00728988(unaff_r6,piVar4,auStack_200);
          if ((short)local_114[0] != 2) goto LAB_007bc8c0;
        } while (unaff_r4 != piVar3);
      }
      FUN_007bbe60(param_2 + 5);
    }
    *param_2 = 0;
  }
  if (param_2[9] != 0) {
    unaff_r4 = (int *)param_2[10];
    unaff_r6 = (int *)param_2[0xc];
  }
  if (param_2[9] != 0 && unaff_r4 != unaff_r6) {
    do {
      FUN_016dd1aa(auStack_200,unaff_r4,0xe8);
      unaff_r4 = unaff_r4 + 0x3a;
      param_2[10] = (int)unaff_r4;
      FUN_00728988(local_114,piVar4,auStack_200);
      if ((short)local_114[0] != 2) goto LAB_007bc8cc;
    } while (unaff_r4 != unaff_r6);
  }
  *param_1 = 2;
  return;
LAB_007bc8c0:
LAB_007bc8cc:
  FUN_016dd1aa(auStack_200,(uint)local_114 | 2,0xea);
  *param_1 = (short)local_114[0];
  FUN_016dd1aa(param_1 + 1,auStack_200,0xea);
  return;
}

