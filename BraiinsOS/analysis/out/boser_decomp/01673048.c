// FUN_01673048 @ 01673048 size=340 calls_out=1 calls_in=4
// strings: $ref~! | $ref~! | idlast_updatedlast_ticknext_tickran

undefined8 FUN_01673048(uint param_1,char *param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int unaff_r5;
  undefined4 uVar5;
  
  if ((param_1 & 0xff) - 3 < 3) {
    pcVar4 = (char *)0x0;
    if ((*param_2 == '\x05') &&
       (pcVar1 = (char *)FUN_0196b3a8(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),
                                      "$id",3), pcVar1 != (char *)0x0)) {
      pcVar4 = *(char **)(pcVar1 + 8);
      unaff_r5 = *(int *)(pcVar1 + 0xc);
      if (*pcVar1 != '\x03') {
        pcVar4 = (char *)0x0;
      }
    }
    goto LAB_01673188;
  }
  if ((param_1 & 0xff) - 1 < 2) {
    pcVar4 = (char *)0x0;
    if (*param_2 != '\x05') goto LAB_01673188;
    uVar5 = *(undefined4 *)(param_2 + 4);
    unaff_r5 = *(int *)(param_2 + 8);
    iVar2 = FUN_0196b3a8(uVar5,unaff_r5,"$ref~!",4);
    if (iVar2 != 0) goto LAB_01673188;
    uVar3 = 3;
    pcVar4 = "$id";
  }
  else {
    pcVar4 = (char *)0x0;
    if (*param_2 != '\x05') goto LAB_01673188;
    uVar5 = *(undefined4 *)(param_2 + 4);
    unaff_r5 = *(int *)(param_2 + 8);
    iVar2 = FUN_0196b3a8(uVar5,unaff_r5,"$ref~!",4);
    if (iVar2 != 0) goto LAB_01673188;
    uVar3 = 2;
    pcVar4 = "idlast_updatedlast_ticknext_tickran";
  }
  pcVar1 = (char *)FUN_0196b3a8(uVar5,unaff_r5,pcVar4,uVar3);
  if ((pcVar1 != (char *)0x0) && (pcVar4 = *(char **)(pcVar1 + 8), *pcVar1 == '\x03')) {
    unaff_r5 = *(int *)(pcVar1 + 0xc);
    if (unaff_r5 == 0) {
      unaff_r5 = 0;
      goto LAB_01673188;
    }
    if (*pcVar4 != '#') goto LAB_01673188;
  }
  pcVar4 = (char *)0x0;
LAB_01673188:
  return CONCAT44(unaff_r5,pcVar4);
}

