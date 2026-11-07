// FUN_01503ffc @ 01503ffc size=1152 calls_out=2 calls_in=0
// strings: ChangeCipherSpec | ChangeCipherSpec | ChangeCipherSpec | ChangeCipherSpec

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_01503ffc(int param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 **ppuVar8;
  code *pcVar9;
  undefined1 *puVar10;
  int iVar11;
  undefined1 *puVar12;
  code *pcVar13;
  undefined1 **local_3c;
  code *local_38;
  undefined1 *local_34;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 *local_2c;
  code *local_28;
  
  ppuVar8 = (undefined1 **)*param_2;
  pcVar9 = (code *)param_2[1];
  puVar10 = *(undefined1 **)(param_1 + 4);
  iVar11 = *(int *)(param_1 + 8);
  pcVar13 = *(code **)(pcVar9 + 0xc);
  uVar2 = (*pcVar13)(ppuVar8,&DAT_00418df9,1);
  if (iVar11 == 0) goto LAB_015041fc;
  uVar7 = param_2[2];
  if (uVar2 != 0) goto LAB_015041f0;
  if ((uVar7 & 0x800000) != 0) {
    iVar3 = (*pcVar13)(ppuVar8,&DAT_0041950e,1);
    if (iVar3 != 0) goto LAB_015041f0;
    local_34 = &local_2e;
    local_2e = 1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*puVar10) {
    case 0:
      local_3c = ppuVar8;
      local_38 = pcVar9;
      iVar3 = FUN_00fb1f64(&local_3c,"ChangeCipherSpec",0x10);
      break;
    case 1:
      local_3c = ppuVar8;
      local_38 = pcVar9;
      iVar3 = FUN_00fb1f64(&local_3c,&DAT_0040b45b,5);
      break;
    case 2:
      puVar5 = &DAT_0040b460;
      goto LAB_01504198;
    case 3:
      local_3c = ppuVar8;
      local_38 = pcVar9;
      iVar3 = FUN_00fb1f64(&local_3c,&DAT_0040b469,0xf);
      break;
    case 4:
      puVar5 = &DAT_0040b478;
LAB_01504198:
      local_3c = ppuVar8;
      local_38 = pcVar9;
      iVar3 = FUN_00fb1f64(&local_3c,puVar5,9);
      break;
    case 5:
      local_2d = puVar10[1];
      local_2c = &local_2d;
      local_28 = FUN_0078955c;
      local_3c = ppuVar8;
      local_38 = pcVar9;
      iVar3 = FUN_00fa948c(&local_3c,&DAT_01880dc4,&DAT_0040b481,&local_2c);
    }
    if (iVar3 == 0) {
      uVar2 = FUN_00fb1f64(&local_3c,&DAT_00414a81,2);
    }
    else {
LAB_015041f0:
      uVar2 = 1;
    }
    goto joined_r0x015041f4;
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*puVar10) {
  case 0:
    uVar6 = 0x10;
    pcVar4 = "ChangeCipherSpec";
    break;
  case 1:
    uVar6 = 5;
    pcVar4 = &DAT_0040b45b;
    break;
  case 2:
    pcVar4 = &DAT_0040b460;
    goto LAB_01504114;
  case 3:
    uVar6 = 0xf;
    pcVar4 = &DAT_0040b469;
    break;
  case 4:
    pcVar4 = &DAT_0040b478;
LAB_01504114:
    uVar6 = 9;
    break;
  case 5:
    local_2c = (undefined1 *)CONCAT31(local_2c._1_3_,puVar10[1]);
    local_3c = &local_2c;
    local_38 = FUN_0078955c;
    uVar2 = FUN_00fa948c(ppuVar8,pcVar9,&DAT_0040b481,&local_3c);
    goto joined_r0x015041f4;
  }
  uVar2 = (*pcVar13)(ppuVar8,pcVar4,uVar6);
joined_r0x015041f4:
  if (iVar11 != 1) {
    iVar11 = iVar11 * 2 + -2;
    do {
      puVar12 = puVar10 + 2;
      uVar1 = uVar2 & 1;
      uVar2 = 1;
      if (uVar1 != 0) goto LAB_015042a8;
      if ((uVar7 & 0x800000) == 0) {
        iVar3 = (*pcVar13)(ppuVar8,&DAT_0041950f,2);
        uVar2 = 1;
        if (iVar3 != 0) goto LAB_015042a8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*puVar12) {
        case 0:
          uVar2 = (*pcVar13)(ppuVar8,"ChangeCipherSpec",0x10);
          break;
        case 1:
          uVar2 = (*pcVar13)(ppuVar8,&DAT_0040b45b,5);
          break;
        case 2:
          puVar5 = &DAT_0040b460;
          goto LAB_01504468;
        case 3:
          uVar2 = (*pcVar13)(ppuVar8,&DAT_0040b469,0xf);
          break;
        case 4:
          puVar5 = &DAT_0040b478;
LAB_01504468:
          uVar2 = (*pcVar13)(ppuVar8,puVar5,9);
          break;
        case 5:
          local_2c = (undefined1 *)CONCAT31(local_2c._1_3_,puVar10[3]);
          local_38 = FUN_0078955c;
          local_3c = &local_2c;
          uVar2 = FUN_00fa948c(ppuVar8,pcVar9,&DAT_0040b481,&local_3c);
        }
        goto LAB_015042a8;
      }
      local_34 = &local_2e;
      local_2e = 1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*puVar12) {
      case 0:
        local_3c = ppuVar8;
        local_38 = pcVar9;
        iVar3 = FUN_00fb1f64(&local_3c,"ChangeCipherSpec",0x10);
        break;
      case 1:
        local_3c = ppuVar8;
        local_38 = pcVar9;
        iVar3 = FUN_00fb1f64(&local_3c,&DAT_0040b45b,5);
        break;
      case 2:
        puVar5 = &DAT_0040b460;
        goto LAB_015043a0;
      case 3:
        local_3c = ppuVar8;
        local_38 = pcVar9;
        iVar3 = FUN_00fb1f64(&local_3c,&DAT_0040b469,0xf);
        break;
      case 4:
        puVar5 = &DAT_0040b478;
LAB_015043a0:
        local_3c = ppuVar8;
        local_38 = pcVar9;
        iVar3 = FUN_00fb1f64(&local_3c,puVar5,9);
        break;
      case 5:
        local_2d = puVar10[3];
        local_28 = FUN_0078955c;
        local_2c = &local_2d;
        local_3c = ppuVar8;
        local_38 = pcVar9;
        iVar3 = FUN_00fa948c(&local_3c,&DAT_01880dc4,&DAT_0040b481,&local_2c);
      }
      if (iVar3 == 0) {
        uVar2 = FUN_00fb1f64(&local_3c,&DAT_00414a81,2);
      }
      else {
        uVar2 = 1;
      }
LAB_015042a8:
      iVar11 = iVar11 + -2;
      puVar10 = puVar12;
    } while (iVar11 != 0);
  }
LAB_015041fc:
  uVar6 = 1;
  if (uVar2 == 0) {
    uVar6 = (*pcVar13)(ppuVar8,&DAT_00418ec5,1);
  }
  return uVar6;
}

