// FUN_013de4b8 @ 013de4b8 size=188 calls_out=4 calls_in=1
// strings: 

undefined8 FUN_013de4b8(int *param_1,int param_2)

{
  int iVar1;
  short *psVar2;
  undefined4 uVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  short *local_6c;
  undefined2 local_68 [2];
  short *local_64;
  
  iVar6 = param_1[1];
  if (*param_1 == iVar6) {
    psVar2 = (short *)0x0;
    uVar3 = 0;
  }
  else {
    psVar4 = (short *)0x0;
    iVar1 = *param_1;
    do {
      iVar5 = iVar1 + 0xe8;
      uVar7 = *(undefined4 *)(param_2 + 8);
      uVar3 = *(undefined4 *)(param_2 + 0x14);
      *param_1 = iVar5;
      psVar2 = (short *)FUN_013cb240(iVar1,param_2);
      if (psVar2 != (short *)0x0) {
        if (*psVar2 == 0xe) {
          *(undefined4 *)(param_2 + 0x14) = uVar3;
          local_6c = psVar2;
          FUN_013de470(param_2,uVar7);
          local_68[0] = 0x14;
          local_64 = psVar4;
          psVar2 = (short *)FUN_013e649c(local_68);
          FUN_013f476c(&local_6c);
        }
        uVar3 = 1;
        goto LAB_013de568;
      }
      psVar4 = (short *)((int)psVar4 + 1);
      iVar1 = iVar5;
    } while (iVar5 != iVar6);
    uVar3 = 0;
    psVar2 = psVar4;
  }
LAB_013de568:
  return CONCAT44(psVar2,uVar3);
}

