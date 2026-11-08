// FUN_00035f58 @ 00035f58  size=1288  callers=1
// program: bmminer


void FUN_00035f58(size_t *param_1,size_t *param_2,undefined1 *param_3,int param_4)

{
  int iVar1;
  size_t sVar2;
  size_t *psVar3;
  void *pvVar4;
  void *pvVar5;
  int iVar6;
  
  if (*param_1 != 0) {
    *param_2 = *param_1;
    memcpy((void *)param_2[1],(void *)param_1[1],*param_1);
  }
  if (param_1[2] == 0) {
    sVar2 = param_1[4];
    if (sVar2 != 0) goto LAB_000362a8;
LAB_00035f90:
    sVar2 = param_1[6];
    if (sVar2 != 0) goto LAB_000362c8;
LAB_00035f9c:
    sVar2 = param_1[10];
    if (sVar2 != 0) goto LAB_000362e8;
LAB_00035fa8:
    sVar2 = param_1[0xc];
  }
  else {
    param_2[2] = param_1[2];
    memcpy((void *)param_2[3],(void *)param_1[3],param_1[2]);
    sVar2 = param_1[4];
    if (sVar2 == 0) goto LAB_00035f90;
LAB_000362a8:
    param_2[4] = sVar2;
    memcpy((void *)param_2[5],(void *)param_1[5],param_1[4]);
    sVar2 = param_1[6];
    if (sVar2 == 0) goto LAB_00035f9c;
LAB_000362c8:
    param_2[6] = sVar2;
    memcpy((void *)param_2[7],(void *)param_1[7],param_1[6]);
    sVar2 = param_1[10];
    if (sVar2 == 0) goto LAB_00035fa8;
LAB_000362e8:
    param_2[10] = sVar2;
    memcpy((void *)param_2[0xb],(void *)param_1[0xb],param_1[10]);
    sVar2 = param_1[0xc];
  }
  if (sVar2 != 0) {
    param_2[0xc] = sVar2;
    memcpy((void *)param_2[0xd],(void *)param_1[0xd],param_1[0xc]);
  }
  if (param_1[8] != 0) {
    param_2[8] = param_1[8];
    memcpy((void *)param_2[9],(void *)param_1[9],param_1[8]);
  }
  if ((param_1[0xe] != 0) &&
     (iVar1 = memcmp((void *)param_2[0xf],(void *)param_1[0xf],param_1[0xe]), iVar1 != 0)) {
    *param_3 = 0;
    param_2[0xe] = param_1[0xe];
    memcpy((void *)param_2[0xf],(void *)param_1[0xf],param_1[0xe]);
  }
  if ((param_1[0x10] != 0) &&
     (iVar1 = memcmp((void *)param_2[0x11],(void *)param_1[0x11],param_1[0x10]), iVar1 != 0)) {
    *param_3 = 0;
    param_2[0x10] = param_1[0x10];
    memcpy((void *)param_2[0x11],(void *)param_1[0x11],param_1[0x10]);
  }
  if ((param_1[0x12] != 0) &&
     (iVar1 = memcmp((void *)param_2[0x13],(void *)param_1[0x13],param_1[0x12]), iVar1 != 0)) {
    *param_3 = 0;
    param_2[0x12] = param_1[0x12];
    memcpy((void *)param_2[0x13],(void *)param_1[0x13],param_1[0x12]);
  }
  if ((param_1[0x14] != 0) &&
     (iVar1 = memcmp((void *)param_2[0x15],(void *)param_1[0x15],param_1[0x14]), iVar1 != 0)) {
    *param_3 = 0;
    param_2[0x14] = param_1[0x14];
    memcpy((void *)param_2[0x15],(void *)param_1[0x15],param_1[0x14]);
  }
  if ((param_1[0x16] != 0) &&
     (iVar1 = memcmp((void *)param_2[0x17],(void *)param_1[0x17],param_1[0x16]), iVar1 != 0)) {
    *param_3 = 0;
    param_2[0x16] = param_1[0x16];
    memcpy((void *)param_2[0x17],(void *)param_1[0x17],param_1[0x16]);
  }
  if (((param_1[0x18] != 0) &&
      (iVar6 = *(int *)param_1[0x19], iVar1 = FUN_0002afa8(), iVar1 <= iVar6)) &&
     (iVar6 = *(int *)param_1[0x19], iVar1 = FUN_0002afb8(), iVar6 <= iVar1)) {
    pvVar4 = (void *)param_2[0x19];
    sVar2 = param_1[0x18];
    iVar1 = memcmp(pvVar4,(void *)param_1[0x19],sVar2);
    if (iVar1 != 0) {
      param_2[0x18] = sVar2;
      memcpy(pvVar4,(void *)param_1[0x19],param_1[0x18]);
    }
  }
  if ((param_1[0x1a] != 0) &&
     (iVar1 = memcmp((void *)param_2[0x1b],(void *)param_1[0x1b],param_1[0x1a]), iVar1 != 0)) {
    *param_3 = 0;
    param_2[0x1a] = param_1[0x1a];
    memcpy((void *)param_2[0x1b],(void *)param_1[0x1b],param_1[0x1a]);
  }
  sVar2 = param_1[0x1c];
  if (sVar2 != 0) {
    if ((void *)param_2[0x1d] == (void *)0x0) {
      param_2[0x1c] = sVar2;
      pvVar4 = malloc(4);
      param_2[0x1d] = (size_t)pvVar4;
      memcpy(pvVar4,(void *)param_1[0x1d],param_1[0x1c]);
      *param_3 = 0;
    }
    else {
      iVar1 = memcmp((void *)param_2[0x1d],(void *)param_1[0x1d],sVar2);
      if (iVar1 != 0) {
        *param_3 = 0;
        param_2[0x1c] = param_1[0x1c];
        memcpy((void *)param_2[0x1d],(void *)param_1[0x1d],param_1[0x1c]);
        if (param_4 != 0) {
          return;
        }
        goto LAB_000360c0;
      }
    }
  }
  if (param_4 != 0) {
    return;
  }
LAB_000360c0:
  psVar3 = param_1 + 0x12;
  do {
    sVar2 = param_1[0x21];
    if (param_2[0x21] == sVar2 || sVar2 == 0) {
      if (sVar2 == 0) {
        sVar2 = param_1[0x23];
        goto LAB_0003618c;
      }
      pvVar5 = (void *)param_1[0x20];
      pvVar4 = (void *)param_2[0x20];
      iVar1 = memcmp(pvVar5,pvVar4,sVar2);
      if (iVar1 != 0) goto LAB_000360fc;
      sVar2 = param_2[0x23];
      if (param_1[0x23] == sVar2) goto LAB_0003618c;
LAB_00036128:
      pvVar5 = (void *)param_1[0x22];
      pvVar4 = (void *)param_2[0x22];
LAB_00036130:
      param_2[0x22] = (size_t)pvVar5;
      param_2[0x23] = param_1[0x23];
      param_1[0x22] = (size_t)pvVar4;
LAB_00036140:
      sVar2 = param_1[0x1f];
      if (sVar2 == param_2[0x1f]) goto LAB_000361c0;
LAB_00036150:
      if (param_1[0x21] == 0) goto LAB_000361c0;
      pvVar5 = (void *)param_1[0x1e];
      pvVar4 = (void *)param_2[0x1e];
LAB_00036164:
      param_2[0x1e] = (size_t)pvVar5;
      param_2[0x1f] = param_1[0x1f];
      param_1[0x1e] = (size_t)pvVar4;
    }
    else {
      pvVar5 = (void *)param_1[0x20];
      pvVar4 = (void *)param_2[0x20];
LAB_000360fc:
      param_2[0x20] = (size_t)pvVar5;
      param_2[0x21] = param_1[0x21];
      param_1[0x20] = (size_t)pvVar4;
      sVar2 = param_2[0x23];
      if (param_1[0x23] != param_2[0x23]) {
        if (param_1[0x21] != 0) goto LAB_00036128;
        sVar2 = param_1[0x23];
      }
LAB_0003618c:
      if (sVar2 == 0) goto LAB_00036140;
      pvVar5 = (void *)param_1[0x22];
      pvVar4 = (void *)param_2[0x22];
      iVar1 = memcmp(pvVar5,pvVar4,sVar2);
      if (iVar1 != 0) goto LAB_00036130;
      sVar2 = param_1[0x1f];
      if (sVar2 != param_2[0x1f]) goto LAB_00036150;
LAB_000361c0:
      if (sVar2 != 0) {
        pvVar5 = (void *)param_1[0x1e];
        pvVar4 = (void *)param_2[0x1e];
        iVar1 = memcmp(pvVar5,pvVar4,sVar2);
        if (iVar1 != 0) goto LAB_00036164;
      }
    }
    param_1 = param_1 + 6;
    param_2 = param_2 + 6;
    if (psVar3 == param_1) {
      return;
    }
  } while( true );
}

