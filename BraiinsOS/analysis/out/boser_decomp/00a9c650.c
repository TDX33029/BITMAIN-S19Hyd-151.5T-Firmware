// FUN_00a9c650 @ 00a9c650 size=464 calls_out=2 calls_in=1
// strings: System error | Missing step | Missing upgrade image | Missing keep parameter

undefined4 FUN_00a9c650(undefined1 param_1,int *param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_1) {
  case 0:
    iVar3 = param_2[2];
    if ((uint)(*param_2 - iVar3) < 0xc) {
      FUN_0132b898(param_2,iVar3,0xc,1,1);
      iVar3 = param_2[2];
    }
    iVar1 = param_2[1];
    pcVar2 = "System error";
    goto LAB_00a9c6f8;
  case 1:
    iVar3 = param_2[2];
    if ((uint)(*param_2 - iVar3) < 0x16) {
      FUN_0132b898(param_2,iVar3,0x16,1,1);
      iVar3 = param_2[2];
    }
    FUN_01bed4e2(param_2[1] + iVar3,"Missing keep parameter",0x16);
    iVar3 = iVar3 + 0x16;
    break;
  case 2:
    iVar3 = param_2[2];
    if ((uint)(*param_2 - iVar3) < 0xc) {
      FUN_0132b898(param_2,iVar3,0xc,1,1);
      iVar3 = param_2[2];
    }
    iVar1 = param_2[1];
    pcVar2 = "Missing step";
LAB_00a9c6f8:
    FUN_01bed4e2(iVar1 + iVar3,pcVar2,0xc);
    iVar3 = iVar3 + 0xc;
    break;
  case 3:
    iVar3 = param_2[2];
    if ((uint)(*param_2 - iVar3) < 0x15) {
      FUN_0132b898(param_2,iVar3,0x15,1,1);
      iVar3 = param_2[2];
    }
    FUN_01bed4e2(param_2[1] + iVar3,"Missing upgrade image",0x15);
    iVar3 = iVar3 + 0x15;
    break;
  case 4:
    iVar3 = param_2[2];
    if ((uint)(*param_2 - iVar3) < 0xf) {
      FUN_0132b898(param_2,iVar3,0xf,1,1);
      iVar3 = param_2[2];
    }
    FUN_01bed4e2(param_2[1] + iVar3,&DAT_003e7d20,0xf);
    iVar3 = iVar3 + 0xf;
  }
  param_2[2] = iVar3;
  return 0;
}

