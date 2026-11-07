// FUN_00c0326c @ 00c0326c size=680 calls_out=6 calls_in=1
// strings: inlet_outlet_pcb_temperature

undefined4 FUN_00c0326c(char *param_1,int *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint local_38;
  int *local_34;
  
  if (*param_1 != '\0') {
    local_38 = 10;
    uVar1 = FUN_0157c50c(&local_38,0,0);
    return uVar1;
  }
  piVar4 = *(int **)(param_1 + 4);
  piVar2 = (int *)*piVar4;
  if (param_1[1] != '\x01') {
    iVar3 = piVar2[2];
    if (*piVar2 == iVar3) {
      FUN_00d653ec(piVar2,iVar3,1,1,1);
      iVar3 = piVar2[2];
    }
    *(undefined1 *)(piVar2[1] + iVar3) = 0x2c;
    piVar2[2] = piVar2[2] + 1;
    piVar2 = (int *)*piVar4;
  }
  param_1[1] = '\x02';
  FUN_00cd2b24(&local_38,piVar2,"inlet_outlet_pcb_temperature",0x1c);
  if ((char)local_38 != '\x04') {
    uVar1 = FUN_0157c4a0(local_38,local_34);
    return uVar1;
  }
  piVar2 = (int *)*piVar4;
  iVar3 = piVar2[2];
  if (*piVar2 == iVar3) {
    FUN_00d653ec(piVar2,iVar3,1,1,1);
    iVar3 = piVar2[2];
  }
  *(undefined1 *)(piVar2[1] + iVar3) = 0x3a;
  iVar3 = *param_2;
  piVar2[2] = piVar2[2] + 1;
  if (iVar3 == 1) {
    iVar5 = param_2[1];
    iVar6 = param_2[2];
    piVar2 = (int *)*piVar4;
    iVar3 = piVar2[2];
    if (*piVar2 == iVar3) {
      FUN_00d653ec(iVar5,piVar2,iVar3,1,1,1);
      iVar3 = piVar2[2];
    }
    *(undefined1 *)(piVar2[1] + iVar3) = 0x5b;
    piVar2[2] = piVar2[2] + 1;
    local_38 = 0x100;
    local_34 = piVar4;
    FUN_00cd3d48(iVar5,&local_38);
    FUN_00cd3d48(iVar6,&local_38);
    if ((local_38 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00419463,0x28,&DAT_0187bf38);
    }
    if ((local_38 & 0xff00) == 0) {
      return 0;
    }
    piVar4 = (int *)*local_34;
    iVar3 = piVar4[2];
    if (*piVar4 == iVar3) {
      FUN_00d653ec(piVar4,iVar3,1,1,1);
      iVar3 = piVar4[2];
    }
    *(undefined1 *)(piVar4[1] + iVar3) = 0x5d;
    iVar3 = piVar4[2] + 1;
  }
  else {
    piVar4 = (int *)*piVar4;
    iVar3 = piVar4[2];
    if ((uint)(*piVar4 - iVar3) < 4) {
      FUN_00d653ec(piVar4,iVar3,4,1,1);
      iVar3 = piVar4[2];
    }
    *(undefined4 *)(piVar4[1] + iVar3) = 0x6c6c756e;
    iVar3 = piVar4[2] + 4;
  }
  piVar4[2] = iVar3;
  return 0;
}

